// Function: FUN_009cf328
// Address: 009cf328
// Size: 556 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x009cf7fa) */

ulonglong FUN_009cf328(dword *param_1,undefined8 param_2,longlong param_3,FILE *param_4)

{
  undefined1 *puVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_var;
  byte *pbVar5;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  longlong lVar6;
  FILE *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  byte *pbVar10;
  longlong *plVar11;
  longlong *unaff_RDI;
  longlong *plVar12;
  ulonglong uVar13;
  dword *pdVar14;
  bool bVar15;
  byte *pbStack_f0;
  undefined1 uStack_e1;
  longlong local_b8 [16];
  longlong local_38;
  
  sVar2 = (size_t)param_3;
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar13 = 0;
  if (unaff_RDI[0xf] == 0) goto LAB_009cf4e6;
  plVar11 = (longlong *)unaff_RDI[0x10];
  if (plVar11 == (longlong *)0x0) {
    FUN_009cf810();
    if (unaff_RDI[0xf] == 0) {
      return 0xffffffff;
    }
    if ((*(byte *)((longlong)unaff_RDI + 0x18c) & 8) == 0) {
      unaff_RDI[5] = 0;
      unaff_RDI[6] = 0;
      unaff_RDI[7] = 0;
      bVar15 = *(char *)((longlong)unaff_RDI + 0x192) == '\0';
      lVar6 = 0x40;
      if (bVar15) {
        lVar6 = 0x68;
      }
      param_1 = *(dword **)((longlong)unaff_RDI + lVar6);
      pbVar10 = (byte *)((longlong)param_1 + unaff_RDI[(ulonglong)bVar15 * 2 + 0xc]);
      unaff_RDI[2] = (longlong)param_1;
      unaff_RDI[3] = (longlong)pbVar10;
      unaff_RDI[4] = (longlong)pbVar10;
      *(undefined4 *)((longlong)unaff_RDI + 0x18c) = 8;
      bVar15 = true;
    }
    else {
      pbVar10 = (byte *)unaff_RDI[3];
      bVar15 = false;
    }
    if (pbVar10 == (byte *)0x0) {
      pbVar10 = &stack0xffffffffffffff20;
      param_1 = (dword *)&uStack_e1;
      unaff_RDI[2] = (longlong)param_1;
      unaff_RDI[3] = (longlong)pbVar10;
      unaff_RDI[4] = (longlong)pbVar10;
    }
    if (bVar15) {
      pbVar5 = (byte *)unaff_RDI[4];
      pdVar14 = (dword *)0x0;
    }
    else {
      pbVar5 = (byte *)unaff_RDI[4];
      pdVar14 = (dword *)(((longlong)pbVar5 - unaff_RDI[2]) / 2);
      param_1 = &MACH_HEADER.cputype;
      if ((undefined1 *)((longlong)&MACH_HEADER.magic + 3) < pdVar14) {
        pdVar14 = &MACH_HEADER.cputype;
      }
    }
    if (pbVar10 != pbVar5) {
      uVar13 = (ulonglong)*pbVar10;
      goto LAB_009cf78e;
    }
    _memmove(param_1,pdVar14,sVar2);
    if (*(char *)((longlong)unaff_RDI + 0x192) == '\0') {
      lVar6 = unaff_RDI[9];
      lVar8 = unaff_RDI[10];
      if ((void *)(lVar8 - lVar6) != (void *)0x0) {
        _memmove(param_1,(void *)(lVar8 - lVar6),sVar2);
        lVar6 = unaff_RDI[9];
        lVar8 = unaff_RDI[10];
      }
      plVar11 = (longlong *)unaff_RDI[8];
      lVar6 = (lVar8 - lVar6) + (longlong)plVar11;
      unaff_RDI[9] = lVar6;
      if (plVar11 == unaff_RDI + 0xb) {
        lVar8 = 8;
      }
      else {
        lVar8 = unaff_RDI[0xc];
      }
      unaff_RDI[10] = (longlong)plVar11 + lVar8;
      uVar13 = ((longlong)plVar11 + lVar8) - lVar6;
      if ((ulonglong)(unaff_RDI[0xe] - (longlong)pdVar14) <= uVar13) {
        uVar13 = unaff_RDI[0xe] - (longlong)pdVar14;
      }
      plVar11 = unaff_RDI + 0x11;
      plVar9 = unaff_RDI + 0x21;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *plVar9 = *plVar11;
        plVar11 = plVar11 + 1;
        plVar9 = plVar9 + 1;
      }
      sVar2 = _fread((void *)unaff_RDI[0xf],(size_t)uVar13,sVar2,param_4);
      if (CONCAT44(extraout_var_01,sVar2) != 0) {
        if ((longlong *)unaff_RDI[0x10] == (longlong *)0x0) {
          FUN_009cf810();
          uVar13 = 0xffffffff;
          if (((section_00000068.segname._0_8_ != 0) &&
              ((ulonglong)MACH_HEADER._16_8_ < (ulonglong)MACH_HEADER._24_8_)) &&
             ((((byte)section_00000158.offset & 0x10) != 0 ||
              (*(char *)(MACH_HEADER._24_8_ + -1) == '\x01')))) {
            puVar1 = (undefined1 *)(MACH_HEADER._24_8_ + -1);
            MACH_HEADER._24_8_ = MACH_HEADER._24_8_ + -1;
            *puVar1 = 1;
            uVar13 = 1;
          }
          return uVar13;
        }
        lVar6 = CONCAT44(extraout_var_01,sVar2) + unaff_RDI[9];
        unaff_RDI[10] = lVar6;
        iVar4 = (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x20))
                          (lVar6,unaff_RDI[8],unaff_RDI + 9,
                           (undefined1 *)(unaff_RDI[2] + (longlong)pdVar14));
        if (iVar4 == 3) {
          pbVar10 = (byte *)unaff_RDI[8];
          pbStack_f0 = (byte *)unaff_RDI[10];
          unaff_RDI[2] = (longlong)pbVar10;
        }
        else {
          pbVar10 = (byte *)((longlong)pdVar14 + unaff_RDI[2]);
          if (pbStack_f0 == pbVar10) goto LAB_009cf789;
        }
        unaff_RDI[3] = (longlong)pbVar10;
        unaff_RDI[4] = (longlong)pbStack_f0;
        uVar13 = (ulonglong)*pbVar10;
        goto LAB_009cf78e;
      }
    }
    else {
      sVar2 = _fread((void *)unaff_RDI[0xf],((int)unaff_RDI[4] - (int)pdVar14) - (int)unaff_RDI[2],
                     sVar2,param_4);
      if (CONCAT44(extraout_var_00,sVar2) != 0) {
        puVar1 = (undefined1 *)(unaff_RDI[2] + (longlong)pdVar14);
        unaff_RDI[3] = (longlong)puVar1;
        unaff_RDI[4] = (longlong)(puVar1 + CONCAT44(extraout_var_00,sVar2));
        uVar13 = (ulonglong)*(byte *)(unaff_RDI[2] + (longlong)pdVar14);
        goto LAB_009cf78e;
      }
    }
LAB_009cf789:
    uVar13 = 0xffffffff;
LAB_009cf78e:
    if ((undefined1 *)unaff_RDI[2] == &uStack_e1) {
      unaff_RDI[4] = 0;
      unaff_RDI[3] = 0;
      unaff_RDI[2] = 0;
    }
    return uVar13;
  }
  if ((*(uint *)((longlong)unaff_RDI + 0x18c) & 0x10) == 0) {
    if ((*(uint *)((longlong)unaff_RDI + 0x18c) & 8) != 0) {
      plVar9 = unaff_RDI + 0x21;
      plVar12 = local_b8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *plVar12 = *plVar9;
        plVar9 = plVar9 + 1;
        plVar12 = plVar12 + 1;
      }
      if (*(char *)((longlong)unaff_RDI + 0x192) == '\0') {
        uVar3 = (**(code **)(*plVar11 + 0x30))();
        pFVar7 = (FILE *)unaff_RDI[9];
        if (0 < (int)uVar3) {
          pFVar7 = (FILE *)((unaff_RDI[4] - unaff_RDI[3]) * (ulonglong)uVar3);
          goto LAB_009cf482;
        }
        param_3 = unaff_RDI[3];
        if (param_3 == unaff_RDI[4]) goto LAB_009cf482;
        iVar4 = (int)param_3 - (int)unaff_RDI[2];
        (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x40))(pFVar7,unaff_RDI[8]);
        bVar15 = true;
      }
      else {
        pFVar7 = (FILE *)0x0;
LAB_009cf482:
        iVar4 = (int)param_3;
        bVar15 = false;
      }
      iVar4 = _fseeko(pFVar7,1,iVar4);
      if (iVar4 != 0) {
        uVar13 = 0xffffffff;
        goto LAB_009cf4e6;
      }
      if (bVar15) {
        plVar11 = local_b8;
        plVar9 = unaff_RDI + 0x11;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *plVar9 = *plVar11;
          plVar11 = plVar11 + 1;
          plVar9 = plVar9 + 1;
        }
      }
      unaff_RDI[10] = unaff_RDI[8];
      unaff_RDI[9] = unaff_RDI[8];
      *(undefined4 *)((longlong)unaff_RDI + 0x18c) = 0;
      unaff_RDI[2] = 0;
      unaff_RDI[3] = 0;
      unaff_RDI[4] = 0;
    }
  }
  else {
    if (unaff_RDI[6] != unaff_RDI[5]) {
      uVar13 = 0xffffffff;
      iVar4 = (**(code **)(*unaff_RDI + 0x68))();
      if (iVar4 == -1) goto LAB_009cf4e6;
    }
    uVar13 = 0xffffffff;
    do {
      sVar2 = (size_t)local_b8;
      iVar4 = (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x28))(unaff_RDI[0xc] + unaff_RDI[8]);
      pFVar7 = (FILE *)unaff_RDI[0xf];
      lVar6 = local_b8[0] - unaff_RDI[8];
      sVar2 = _fwrite(pFVar7,(size_t)lVar6,sVar2,param_4);
      if (CONCAT44(extraout_var,sVar2) != lVar6) goto LAB_009cf4e6;
    } while (iVar4 == 1);
    if ((iVar4 == 2) || (iVar4 = _fflush(pFVar7), iVar4 != 0)) goto LAB_009cf4e6;
  }
  uVar13 = 0;
LAB_009cf4e6:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}


