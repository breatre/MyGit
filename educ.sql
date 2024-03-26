-- --------------------------------------------------------
-- 主机:                           127.0.0.1
-- 服务器版本:                        5.6.14 - MySQL Community Server (GPL)
-- 服务器操作系统:                      Win64
-- HeidiSQL 版本:                  11.2.0.6213
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

-- 导出  表 educ-陈锐.course 结构
CREATE TABLE IF NOT EXISTS `course` (
  `Cno` char(4) NOT NULL,
  `Cname` varchar(20) NOT NULL,
  `Ccredit` int(11) DEFAULT NULL,
  `Cpno` char(4) DEFAULT NULL,
  PRIMARY KEY (`Cno`),
  UNIQUE KEY `Cname` (`Cname`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- 数据导出被取消选择。

-- 导出  表 educ-陈锐.sc 结构
CREATE TABLE IF NOT EXISTS `sc` (
  `Sno` char(9) NOT NULL,
  `Cno` char(4) NOT NULL,
  `Grade` int(11) DEFAULT NULL,
  PRIMARY KEY (`Sno`),
  KEY `FK__course` (`Cno`),
  CONSTRAINT `FK__course` FOREIGN KEY (`Cno`) REFERENCES `course` (`Cno`),
  CONSTRAINT `FK__student` FOREIGN KEY (`Sno`) REFERENCES `student` (`Sno`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- 数据导出被取消选择。

-- 导出  表 educ-陈锐.student 结构
CREATE TABLE IF NOT EXISTS `student` (
  `Sno` char(9) NOT NULL,
  `Sname` varchar(10) NOT NULL,
  `Ssex` char(2) DEFAULT '男',
  `Sage` int(11) DEFAULT NULL,
  `Sdept` varchar(4) DEFAULT NULL,
  `Sbirth` datetime DEFAULT NULL,
  PRIMARY KEY (`Sno`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- 数据导出被取消选择。

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IFNULL(@OLD_FOREIGN_KEY_CHECKS, 1) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40111 SET SQL_NOTES=IFNULL(@OLD_SQL_NOTES, 1) */;
