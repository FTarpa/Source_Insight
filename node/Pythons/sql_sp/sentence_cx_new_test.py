﻿

UPDATE `sentence_cx_new_test` a SET `CX1`="",`CX2`="",`CX3`="",`CX4`="",`CX5`="",`CX6`="",`CX7`="",
		`CX8`="",`CX9`="",`CX10`="",`CX11`="",`CX12`="",`CX13`="",`CX14`="",`CX15`="";
UPDATE `sentence_cx_new_test` a SET `CX1`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR1` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX2`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR2` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX3`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR3` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX4`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR4` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX5`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR5` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX6`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR6` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX7`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR7` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX8`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR8` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX9`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR9` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX10`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR10` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX11`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR11` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX12`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR12` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX13`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR13` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX14`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR14` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));
UPDATE `sentence_cx_new_test` a SET `CX15`=(SELECT `DCXN` FROM `dict_utf8_all` c WHERE c.`DTXT`= (SELECT `CHR15` FROM `sentence_base_test` b WHERE b.`CID`= a.`CID`));


