// Function: FUN_00f78ae0
// Address: 00f78ae0
// Size: 750 bytes
// Class: Unknown
// String references:
//   "0123456789abcdef"
//   "0123456789ABCDEF"
//   "0x"


undefined8 FUN_00f78ae0(undefined8 param_1,undefined8 param_2,ulonglong param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  size_t sVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  int local_res8;
  int local_res10;
  uint local_res18;
  undefined4 local_5c;
  char acStack_58 [32];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (local_res10 < 0) {
    local_res10 = 0;
  }
  bVar16 = true;
  if ((local_res18 & 0x40) == 0) {
    if ((longlong)param_3 < 0) {
      param_3 = -param_3;
      local_5c = 0x2d;
    }
    else {
      if ((local_res18 & 2) == 0) {
        bVar16 = (local_res18 & 4) == 0;
        local_5c = (local_res18 & 4) << 3;
        goto LAB_00f78b61;
      }
      local_5c = 0x2b;
    }
    bVar16 = false;
  }
  else {
    local_5c = 0;
  }
LAB_00f78b61:
  pcVar7 = "0";
  if (param_4 != 8) {
    pcVar7 = "";
  }
  pcVar11 = "0x";
  if (param_4 != 0x10) {
    pcVar11 = pcVar7;
  }
  pcVar7 = "0123456789ABCDEF";
  if ((local_res18 & 0x20) == 0) {
    pcVar7 = "0123456789abcdef";
  }
  uVar13 = (ulonglong)param_4;
  pcVar8 = (char *)0x0;
  do {
    uVar3 = param_3;
    if (param_3 >> 0x20 == 0) {
      uVar3 = param_3 & 0xffffffff;
    }
    pcVar1 = pcVar8 + 1;
    acStack_58[(longlong)pcVar8] = pcVar7[uVar3 % uVar13];
  } while ((uVar13 <= param_3) &&
          (bVar15 = pcVar8 < (char *)((longlong)&MACH_HEADER.flags + 1), pcVar8 = pcVar1,
          param_3 = uVar3 / uVar13, bVar15));
  if ((local_res18 & 8) == 0) {
    pcVar11 = "";
  }
  uVar13 = (ulonglong)((int)pcVar1 - 1);
  if ((int)pcVar1 != 0x1a) {
    uVar13 = (ulonglong)pcVar1 & 0xffffffff;
  }
  acStack_58[uVar13] = '\0';
  iVar10 = (int)uVar13;
  iVar6 = iVar10;
  if (iVar10 <= local_res10) {
    iVar6 = local_res10;
  }
  sVar5 = _strlen(pcVar8);
  iVar9 = (local_res8 - (uint)(bVar16 ^ 1)) - (sVar5 + iVar6);
  iVar6 = 0;
  iVar14 = local_res10 - iVar10;
  if (local_res10 - iVar10 < 0) {
    iVar14 = iVar6;
  }
  if (iVar9 < 0) {
    iVar9 = iVar6;
  }
  iVar10 = iVar14;
  if (iVar14 < iVar9) {
    iVar10 = iVar9;
  }
  if ((local_res18 & 0x10) == 0) {
    iVar10 = iVar14;
    iVar6 = iVar9;
  }
  iVar14 = -iVar6;
  if ((local_res18 & 1) == 0) {
    iVar14 = iVar6;
  }
  if (iVar14 < 1) {
    if (bVar16 == false) goto LAB_00f78cc1;
LAB_00f78ce1:
    cVar2 = *pcVar11;
    while (cVar2 != '\0') {
      pcVar11 = pcVar11 + 1;
      iVar6 = FUN_00f789b0(param_1,param_2,(int)cVar2);
      if (iVar6 == 0) goto LAB_00f78dc3;
      cVar2 = *pcVar11;
    }
    if (0 < iVar10) {
      iVar10 = iVar10 + 1;
      do {
        iVar6 = FUN_00f789b0(param_1,param_2,0x30);
        if (iVar6 == 0) goto LAB_00f78dc3;
        iVar10 = iVar10 + -1;
      } while (1 < iVar10);
    }
    do {
      if ((int)uVar13 < 1) {
        uVar12 = 1;
        if (-1 < iVar14) goto LAB_00f78dc6;
        goto LAB_00f78da5;
      }
      lVar4 = uVar13 - 1;
      uVar13 = uVar13 - 1;
      iVar6 = FUN_00f789b0(param_1,param_2,(int)acStack_58[lVar4]);
    } while (iVar6 != 0);
  }
  else {
    iVar14 = iVar14 + 1;
    do {
      iVar6 = FUN_00f789b0(param_1,param_2,0x20);
      if (iVar6 == 0) goto LAB_00f78dc3;
      iVar14 = iVar14 + -1;
    } while (1 < iVar14);
    iVar14 = 0;
    if (bVar16 != false) goto LAB_00f78ce1;
LAB_00f78cc1:
    iVar6 = FUN_00f789b0(param_1,param_2,local_5c);
    if (iVar6 != 0) goto LAB_00f78ce1;
  }
LAB_00f78dc3:
  uVar12 = 0;
LAB_00f78dc6:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
  while (iVar14 = iVar14 + 1, iVar14 != 0) {
LAB_00f78da5:
    iVar6 = FUN_00f789b0(param_1,param_2,0x20);
    if (iVar6 == 0) goto LAB_00f78dc3;
  }
  goto LAB_00f78dc6;
}


