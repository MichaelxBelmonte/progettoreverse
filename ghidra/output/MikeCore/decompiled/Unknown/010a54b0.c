// Function: FUN_010a54b0
// Address: 010a54b0
// Size: 865 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_010a54b0(undefined8 param_1,int param_2,FILE *param_3)

{
  FILE *pFVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  size_t len;
  FILE *uis;
  sigaction *psVar7;
  uint uVar8;
  longlong lVar9;
  FILE local_438 [6];
  longlong local_38;
  
  uVar6 = (undefined4)((ulonglong)param_1 >> 0x20);
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  DAT_028abd24 = 0;
  DAT_028abd20 = 0;
  local_438[0]._r = 0;
  local_438[0]._w = 0;
  local_438[0]._p = (uchar *)FUN_010a5820;
  lVar9 = -0x1f;
  psVar7 = (sigaction *)&DAT_028abd40;
  iVar5 = (int)param_1;
  do {
    if ((lVar9 != -0x17) && (((int)lVar9 + 0x20U & 0x7ffffffe) != 0x1e)) {
      _sigaction(iVar5,psVar7,(sigaction *)param_3);
    }
    psVar7 = psVar7 + 1;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0);
  uVar3 = 0;
  _signal(iVar5);
  DAT_028abd20 = 1;
  if (param_2 == 0) {
    _DAT_028abf40 = _DAT_028abce8;
    _DAT_028abf70 = DAT_028abd18;
    _DAT_028abf60 = _DAT_028abd08;
    uRam00000000028abf68 = uRam00000000028abd10;
    _DAT_028abf50 = _DAT_028abcf8;
    uRam00000000028abf58 = uRam00000000028abd00;
    _DAT_028abf30 = _DAT_028abcd8;
    uRam00000000028abf38 = uRam00000000028abce0;
    _DAT_028abf48 = uRam00000000028abcf0 & 0xfffffffffffffff7;
    if (DAT_028abcc0 != '\x01') goto LAB_010a55f1;
    _fileno((FILE *)CONCAT44(uVar6,iVar5));
    uis = (FILE *)&DAT_028abf30;
    iVar2 = _tcsetattr(iVar5,0x28abf30,(termios *)param_3);
    if (iVar2 != -1) goto LAB_010a55f1;
    uVar3 = -(uint)(DAT_028abd24 == 2);
  }
  else {
LAB_010a55f1:
    DAT_028abd20 = 2;
    local_438[0]._p = (uchar *)((ulonglong)local_438[0]._p & 0xffffffffffffff00);
    uis = DAT_028abcc8;
    pcVar4 = _fgets((char *)CONCAT44(uVar6,iVar5),(int)DAT_028abcc8,param_3);
    uVar8 = 0;
    if (((pcVar4 != (char *)0x0) &&
        (iVar2 = _feof((FILE *)CONCAT44(uVar6,iVar5)), pFVar1 = DAT_028abcc8, uVar8 = uVar3,
        iVar2 == 0)) && (iVar2 = _ferror((FILE *)CONCAT44(uVar6,iVar5)), iVar2 == 0)) {
      pcVar4 = _strchr((char *)CONCAT44(uVar6,iVar5),(int)uis);
      if (pcVar4 == (char *)0x0) {
        do {
          uis = pFVar1;
          pcVar4 = _fgets((char *)CONCAT44(uVar6,iVar5),(int)pFVar1,param_3);
          if (pcVar4 == (char *)0x0) goto LAB_010a56db;
          pcVar4 = _strchr((char *)CONCAT44(uVar6,iVar5),(int)uis);
        } while (pcVar4 == (char *)0x0);
      }
      else if ((int)param_1 != 0) {
        *pcVar4 = '\0';
      }
      uis = local_438;
      uVar3 = _UI_set_result((UI *)CONCAT44(uVar6,iVar5),(UI_STRING *)uis,(char *)param_3);
      uVar8 = ~uVar3 >> 0x1f;
    }
LAB_010a56db:
    uVar3 = 0xffffffff;
    if (DAT_028abd24 != 2) {
      uVar3 = uVar8;
    }
    if (param_2 != 0) goto LAB_010a56f9;
  }
  _fputc(iVar5,uis);
  if ((1 < DAT_028abd20) && (param_2 == 0)) {
    _DAT_028abf70 = DAT_028abd18;
    _DAT_028abf60 = _DAT_028abd08;
    uRam00000000028abf68 = uRam00000000028abd10;
    _DAT_028abf50 = _DAT_028abcf8;
    uRam00000000028abf58 = uRam00000000028abd00;
    _DAT_028abf40 = _DAT_028abce8;
    _DAT_028abf48 = uRam00000000028abcf0;
    _DAT_028abf30 = _DAT_028abcd8;
    uRam00000000028abf38 = uRam00000000028abce0;
    if (DAT_028abcc0 == '\x01') {
      _fileno((FILE *)CONCAT44(uVar6,iVar5));
      uis = (FILE *)&DAT_028abf30;
      iVar2 = _tcsetattr(iVar5,0x28abf30,(termios *)param_3);
      if (iVar2 == -1) {
        uVar3 = 0;
      }
    }
  }
LAB_010a56f9:
  len = (size_t)uis;
  if (0 < DAT_028abd20) {
    lVar9 = -0x1f;
    do {
      if (((int)lVar9 + 0x20U & 0x7ffffffe) != 0x1e) {
        uis = (FILE *)0x0;
        _sigaction(iVar5,(sigaction *)0x0,(sigaction *)param_3);
      }
      len = (size_t)uis;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0);
  }
  _OPENSSL_cleanse((void *)CONCAT44(uVar6,iVar5),len);
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}


