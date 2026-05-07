// Function: FUN_00f1f902
// Address: 00f1f902
// Size: 1060 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/IOKit.framework/Versions/A/IOKit"
//   "/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation"


undefined *
FUN_00f1f902(undefined *param_1,undefined1 *param_2,uint param_3,uint param_4,int *param_5,
            uint param_6)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  size_t sVar15;
  ulonglong uVar16;
  undefined *puVar17;
  undefined4 local_res8;
  longlong local_res10;
  ulonglong local_res18;
  longlong local_res20;
  uint local_34;
  
  uVar10 = (ulonglong)(-(int)local_res10 & 7);
  puVar17 = (undefined *)(local_res10 + uVar10);
  puVar7 = (undefined *)(local_res18 - uVar10);
  if (local_res18 < uVar10) {
    puVar17 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
  }
  if (puVar7 <= &UNK_00001f07) {
    return (undefined *)0xffffffffffffffbe;
  }
  if (param_1 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  if (unaff_RSI == 0) {
    return (undefined *)0x0;
  }
  if ((undefined *)0x20000 < param_1) {
    return (undefined *)0xffffffffffffffb8;
  }
  if (0xc < param_4) {
    return (undefined *)0xffffffffffffffd4;
  }
  if (0xff < param_3) {
    return (undefined *)0xffffffffffffffd2;
  }
  local_34 = param_3;
  if (param_3 == 0) {
    local_34 = 0xff;
  }
  uVar4 = 0xb;
  if (param_4 != 0) {
    uVar4 = param_4;
  }
  bVar11 = param_5 != (int *)0x0 & (byte)(param_6 >> 2) & 0x3f;
  if ((bVar11 == 1) && (*param_5 == 2)) {
    puVar7 = (undefined *)FUN_00f20d40(param_2,unaff_RDI + unaff_RSI,param_1,local_res8);
    return puVar7;
  }
  uVar10 = (ulonglong)uVar4;
  if (((param_6 & 8) != 0) && (&UNK_0000a000 <= param_1)) {
    uVar4 = _HIST_count_simple(0x1000,param_2);
    uVar5 = _HIST_count_simple(0x1000,param_2 + (longlong)(param_1 + -0x1000));
    if ((ulonglong)uVar5 + (ulonglong)uVar4 < 0x45) {
      return (undefined *)0x0;
    }
  }
  puVar7 = puVar17 + 0xc08;
  puVar8 = (undefined *)_HIST_count_wksp(param_1,param_2,puVar7,0x1000);
  if ((undefined *)0xffffffffffffff88 < puVar8) {
    return puVar8;
  }
  if (puVar8 == param_1) {
    *unaff_RDI = *param_2;
    return (undefined *)((longlong)&MACH_HEADER.magic + 1);
  }
  if (puVar8 <= (undefined *)(((ulonglong)param_1 >> 7) + 4)) {
    return (undefined *)0x0;
  }
  if (((param_5 != (int *)0x0) && (*param_5 == 1)) && (-1 < (int)local_34)) {
    lVar13 = 0;
    bVar3 = false;
    do {
      lVar1 = lVar13 * 4;
      lVar2 = lVar13 * 8;
      lVar13 = lVar13 + 1;
      bVar3 = (bool)(bVar3 | (*(char *)(local_res20 + 8 + lVar2) == '\0' &&
                             *(int *)(puVar17 + lVar1) != 0));
    } while ((ulonglong)local_34 + 1 != lVar13);
    if (bVar3) {
      *param_5 = 0;
    }
  }
  if ((bVar11 != 0) && (*param_5 != 0)) goto LAB_00f1fb48;
  puVar8 = puVar17 + 0x400;
  uVar6 = _HUF_optimalTableLog
                    (puVar7,local_34,
                     "/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation",puVar8,
                     uVar10);
  puVar9 = (undefined *)
           _HUF_buildCTable_wksp
                     (uVar6,local_34,puVar7,
                      "/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation");
  if ((undefined *)0xffffffffffffff88 < puVar9) {
    return puVar9;
  }
  uVar10 = (ulonglong)local_34;
  ___bzero(puVar8);
  uVar16 = (ulonglong)puVar9 & 0xffffffff;
  puVar7 = (undefined *)_HUF_writeCTable_wksp(uVar10,puVar8,uVar16,puVar7);
  sVar15 = (size_t)uVar16;
  if ((undefined *)0xffffffffffffff88 < puVar7) {
    return puVar7;
  }
  if (param_5 == (int *)0x0) {
    if (param_1 <= puVar7 + 0xc) {
      return (undefined *)0x0;
    }
  }
  else {
    if (*param_5 == 0) {
      if (param_1 <= puVar7 + 0xc) {
        return (undefined *)0x0;
      }
    }
    else {
      if ((int)local_34 < 0) goto LAB_00f1fb48;
      uVar16 = (ulonglong)local_34 + 1;
      uVar10 = 0;
      uVar12 = 0;
      do {
        lVar1 = uVar10 * 8;
        lVar13 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        uVar12 = uVar12 + (ulonglong)*(uint *)(puVar17 + lVar13) *
                          (ulonglong)*(byte *)(local_res20 + 8 + lVar1);
      } while (uVar16 != uVar10);
      uVar10 = 0;
      uVar14 = 0;
      do {
        lVar1 = uVar10 * 8;
        lVar13 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        uVar14 = uVar14 + (ulonglong)*(uint *)(puVar17 + lVar13) *
                          (ulonglong)(byte)puVar17[lVar1 + 0x408];
      } while (uVar16 != uVar10);
      if (((undefined *)(uVar12 >> 3) <= puVar7 + (uVar14 >> 3)) || (param_1 <= puVar7 + 0xc))
      goto LAB_00f1fb48;
    }
    sVar15 = (size_t)uVar16;
    *param_5 = 0;
  }
  if (local_res20 != 0) {
    _memcpy(param_2,&section_000007e0.size,sVar15);
  }
LAB_00f1fb48:
  puVar7 = (undefined *)FUN_00f20d40(param_2,unaff_RDI + unaff_RSI,param_1,local_res8);
  return puVar7;
}


