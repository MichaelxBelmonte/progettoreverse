// Function: FUN_009cf554
// Address: 009cf554
// Size: 616 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x009cf7fa) */

ulonglong FUN_009cf554(dword *param_1,undefined8 param_2,size_t param_3,FILE *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  size_t sVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  longlong unaff_RDI;
  undefined8 *puVar12;
  dword *pdVar13;
  bool bVar14;
  byte *local_38;
  undefined1 local_29;
  
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    return 0xffffffff;
  }
  if ((*(byte *)(unaff_RDI + 0x18c) & 8) == 0) {
    *(undefined8 *)(unaff_RDI + 0x28) = 0;
    *(undefined8 *)(unaff_RDI + 0x30) = 0;
    *(undefined8 *)(unaff_RDI + 0x38) = 0;
    bVar14 = *(char *)(unaff_RDI + 0x192) == '\0';
    lVar9 = 0x40;
    if (bVar14) {
      lVar9 = 0x68;
    }
    param_1 = *(dword **)(unaff_RDI + lVar9);
    pbVar10 = (byte *)((longlong)param_1 +
                      *(longlong *)((ulonglong)bVar14 * 0x10 + 0x60 + unaff_RDI));
    *(dword **)(unaff_RDI + 0x10) = param_1;
    *(byte **)(unaff_RDI + 0x18) = pbVar10;
    *(byte **)(unaff_RDI + 0x20) = pbVar10;
    *(undefined4 *)(unaff_RDI + 0x18c) = 8;
    bVar14 = true;
  }
  else {
    pbVar10 = *(byte **)(unaff_RDI + 0x18);
    bVar14 = false;
  }
  if (pbVar10 == (byte *)0x0) {
    pbVar10 = &stack0xffffffffffffffd8;
    param_1 = (dword *)&local_29;
    *(dword **)(unaff_RDI + 0x10) = param_1;
    *(byte **)(unaff_RDI + 0x18) = pbVar10;
    *(byte **)(unaff_RDI + 0x20) = pbVar10;
  }
  if (bVar14) {
    pbVar5 = *(byte **)(unaff_RDI + 0x20);
    pdVar13 = (dword *)0x0;
  }
  else {
    pbVar5 = *(byte **)(unaff_RDI + 0x20);
    pdVar13 = (dword *)(((longlong)pbVar5 - *(longlong *)(unaff_RDI + 0x10)) / 2);
    param_1 = &MACH_HEADER.cputype;
    if ((undefined1 *)((longlong)&MACH_HEADER.magic + 3) < pdVar13) {
      pdVar13 = &MACH_HEADER.cputype;
    }
  }
  if (pbVar10 != pbVar5) {
    uVar6 = (ulonglong)*pbVar10;
    goto LAB_009cf78e;
  }
  _memmove(param_1,pdVar13,param_3);
  if (*(char *)(unaff_RDI + 0x192) == '\0') {
    lVar9 = *(longlong *)(unaff_RDI + 0x48);
    lVar7 = *(longlong *)(unaff_RDI + 0x50);
    if ((void *)(lVar7 - lVar9) != (void *)0x0) {
      _memmove(param_1,(void *)(lVar7 - lVar9),param_3);
      lVar9 = *(longlong *)(unaff_RDI + 0x48);
      lVar7 = *(longlong *)(unaff_RDI + 0x50);
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x40);
    lVar9 = (lVar7 - lVar9) + lVar2;
    *(longlong *)(unaff_RDI + 0x48) = lVar9;
    if (lVar2 == unaff_RDI + 0x58) {
      lVar7 = 8;
    }
    else {
      lVar7 = *(longlong *)(unaff_RDI + 0x60);
    }
    *(longlong *)(unaff_RDI + 0x50) = lVar2 + lVar7;
    uVar8 = *(longlong *)(unaff_RDI + 0x70) - (longlong)pdVar13;
    uVar6 = (lVar2 + lVar7) - lVar9;
    if (uVar8 <= uVar6) {
      uVar6 = uVar8;
    }
    puVar11 = (undefined8 *)(unaff_RDI + 0x88);
    puVar12 = (undefined8 *)(unaff_RDI + 0x108);
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    sVar3 = _fread(*(void **)(unaff_RDI + 0x78),(size_t)uVar6,param_3,param_4);
    if (CONCAT44(extraout_var_00,sVar3) != 0) {
      if (*(longlong **)(unaff_RDI + 0x80) == (longlong *)0x0) {
        FUN_009cf810();
        uVar6 = 0xffffffff;
        if (((section_00000068.segname._0_8_ != 0) &&
            ((ulonglong)MACH_HEADER._16_8_ < (ulonglong)MACH_HEADER._24_8_)) &&
           ((((byte)section_00000158.offset & 0x10) != 0 ||
            (*(char *)(MACH_HEADER._24_8_ + -1) == '\x01')))) {
          puVar1 = (undefined1 *)(MACH_HEADER._24_8_ + -1);
          MACH_HEADER._24_8_ = MACH_HEADER._24_8_ + -1;
          *puVar1 = 1;
          uVar6 = 1;
        }
        return uVar6;
      }
      lVar9 = CONCAT44(extraout_var_00,sVar3) + *(longlong *)(unaff_RDI + 0x48);
      *(longlong *)(unaff_RDI + 0x50) = lVar9;
      iVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x20))
                        (lVar9,*(undefined8 *)(unaff_RDI + 0x40),unaff_RDI + 0x48,
                         (undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)pdVar13));
      if (iVar4 == 3) {
        pbVar10 = *(byte **)(unaff_RDI + 0x40);
        local_38 = *(byte **)(unaff_RDI + 0x50);
        *(byte **)(unaff_RDI + 0x10) = pbVar10;
      }
      else {
        pbVar10 = (byte *)((longlong)pdVar13 + *(longlong *)(unaff_RDI + 0x10));
        if (local_38 == pbVar10) goto LAB_009cf789;
      }
      *(byte **)(unaff_RDI + 0x18) = pbVar10;
      *(byte **)(unaff_RDI + 0x20) = local_38;
      uVar6 = (ulonglong)*pbVar10;
      goto LAB_009cf78e;
    }
  }
  else {
    sVar3 = _fread(*(void **)(unaff_RDI + 0x78),
                   ((int)*(undefined8 *)(unaff_RDI + 0x20) - (int)pdVar13) -
                   (int)*(undefined8 *)(unaff_RDI + 0x10),param_3,param_4);
    if (CONCAT44(extraout_var,sVar3) != 0) {
      puVar1 = (undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)pdVar13);
      *(undefined1 **)(unaff_RDI + 0x18) = puVar1;
      *(undefined1 **)(unaff_RDI + 0x20) = puVar1 + CONCAT44(extraout_var,sVar3);
      uVar6 = (ulonglong)*(byte *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)pdVar13);
      goto LAB_009cf78e;
    }
  }
LAB_009cf789:
  uVar6 = 0xffffffff;
LAB_009cf78e:
  if (*(undefined1 **)(unaff_RDI + 0x10) == &local_29) {
    *(undefined8 *)(unaff_RDI + 0x20) = 0;
    *(undefined8 *)(unaff_RDI + 0x18) = 0;
    *(undefined8 *)(unaff_RDI + 0x10) = 0;
  }
  return uVar6;
}


