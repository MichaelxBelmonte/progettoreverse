// Function: FUN_00e56290
// Address: 00e56290
// Size: 2268 bytes
// Class: GNCelemonyHTTPUploadRequest


/* WARNING: Removing unreachable block (ram,0x00e565bd) */
/* WARNING: Removing unreachable block (ram,0x00e56536) */
/* WARNING: Removing unreachable block (ram,0x00e56543) */
/* WARNING: Removing unreachable block (ram,0x00e564e9) */
/* WARNING: Removing unreachable block (ram,0x00e564f2) */
/* WARNING: Removing unreachable block (ram,0x00e565c6) */
/* WARNING: Removing unreachable block (ram,0x00e56703) */
/* WARNING: Removing unreachable block (ram,0x00e5670c) */
/* WARNING: Removing unreachable block (ram,0x00e567a2) */
/* WARNING: Removing unreachable block (ram,0x00e567ab) */

undefined8 FUN_00e56290(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  float fVar14;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined1 local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 *local_40;
  char local_38;
  int iVar7;
  
  FUN_00e571b0(0);
  cVar3 = FUN_00e57240();
  if (cVar3 != '\0') {
    return 0;
  }
  if (*(int *)(unaff_RDI + 0x28) < 4) {
    uVar6 = *(uint *)(*(longlong *)(unaff_RDI + 0x40) + 0xc);
  }
  else {
    iVar8 = *(int *)(*(longlong *)(unaff_RDI + 0x78) + 0x18);
    iVar7 = iVar8 + 3;
    if (-1 < iVar8) {
      iVar7 = iVar8;
    }
    uVar6 = iVar7 >> 2;
  }
  if (uVar6 == 0) goto LAB_00e56b81;
  uVar9 = (ulonglong)uVar6;
  FUN_00e57340();
  puVar4 = *(undefined8 **)(unaff_RDI + 0xa0);
  puVar5 = puVar4;
  if (puVar4 != local_40) {
    puVar5 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
        goto LAB_00e56318;
      }
      FUN_00d50b00();
      puVar4 = *(undefined8 **)(unaff_RDI + 0xa0);
      *(undefined8 **)(unaff_RDI + 0xa0) = local_40;
    }
    else {
      local_38 = '\0';
LAB_00e56318:
      *(undefined8 **)(unaff_RDI + 0xa0) = puVar5;
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
      puVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (puVar5 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d227d0();
  if (*(int *)(unaff_RDI + 0x28) < 4) {
    if (0 < (int)uVar6) {
      uVar11 = 0;
      local_78 = uVar9;
      do {
        if (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x40) + 0x10) + uVar11 * 8) == 0)
        {
          local_40 = (undefined8 *)0x0;
          local_38 = '\0';
          FUN_00d21140();
        }
        else {
          cVar3 = FUN_00dab510();
          if (cVar3 == '\0') goto LAB_00e56950;
          iVar8 = *(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x70) + 0x10) + uVar11 * 4);
          local_70 = FUN_00dac670();
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_0258ddc8;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          FUN_00d500e0();
          lVar12 = *(longlong *)(unaff_RDI + 0x30);
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          uVar13 = *(undefined4 *)(unaff_RDI + 0x28);
          lVar1 = *(longlong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x80) + 0x10) + (longlong)iVar8 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_a8 = 1;
          local_b0 = lVar1;
          cVar3 = FUN_00e53510(&local_b0,uVar13);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (lVar12 != 0) {
            FUN_00d50b20();
          }
          if (cVar3 == '\0') {
            FUN_00e571b0(DAT_02390124);
          }
          else {
            local_38 = '\0';
            FUN_00d21140();
            FUN_00dac5e0();
            local_40 = puVar4;
          }
          FUN_00d50b20();
          if (cVar3 == '\0') {
            return 0;
          }
        }
        uVar11 = uVar11 + 1;
      } while (local_78 != uVar11);
    }
  }
  else {
    if (0 < *(int *)(*(longlong *)(unaff_RDI + 0x40) + 0xc)) {
      iVar8 = 0;
      do {
        local_40 = (undefined8 *)0x0;
        local_38 = '\0';
        FUN_00d21140();
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(*(longlong *)(unaff_RDI + 0x40) + 0xc));
    }
    if (0 < (int)uVar6) {
      uVar11 = 0;
      local_80 = uVar9;
      do {
        cVar3 = FUN_00dab510();
        if (cVar3 == '\0') goto LAB_00e56950;
        local_78 = (ulonglong)
                   *(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x78) + 0x10) + uVar11 * 4);
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x70) + 0x10) + local_78 * 4);
        local_70 = FUN_00dac670();
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_0258ddc8;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        FUN_00d500e0();
        lVar12 = *(longlong *)(unaff_RDI + 0x30);
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        local_98 = 1;
        uVar13 = *(undefined4 *)(unaff_RDI + 0x28);
        lVar1 = *(longlong *)
                 (*(longlong *)(*(longlong *)(unaff_RDI + 0x80) + 0x10) + (longlong)iVar8 * 8);
        local_a0 = lVar12;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_88 = 1;
        local_90 = lVar1;
        cVar3 = FUN_00e53510(&local_90,uVar13);
        uVar13 = extraout_XMM0_Da;
        if (lVar1 != 0) {
          uVar13 = FUN_00d50b20();
        }
        if (lVar12 != 0) {
          uVar13 = FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          FUN_00e571b0(DAT_02390124);
        }
        else {
          local_38 = '\0';
          FUN_00d233f0(uVar13,local_78);
          FUN_00dac5e0();
          local_40 = puVar4;
        }
        FUN_00d50b20();
        if (cVar3 == '\0') {
          return 0;
        }
        uVar11 = uVar11 + 1;
      } while (local_80 != uVar11);
    }
  }
  iVar8 = uVar6 * 0x21;
  if (*(char *)(unaff_RDI + 0x2c) == '\0') {
    iVar8 = uVar6 * 0x20;
  }
  FUN_00c8e710();
  if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  puVar4 = *(undefined8 **)(unaff_RDI + 0x90);
  if (puVar4 == local_40) {
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x90) = local_40;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  fVar14 = (float)(iVar8 + 1);
  if ((int)uVar6 < 1) {
    uVar10 = 0;
  }
  else {
    uVar11 = 0;
    uVar10 = 0;
    do {
      cVar3 = FUN_00e43e50();
      if (cVar3 != '\0') {
        cVar3 = FUN_00e573e0();
        if (cVar3 == '\0') goto LAB_00e56950;
        if ((*(longlong *)(unaff_RDI + 0xb8) != 0) &&
           (uVar10 = uVar10 + 0x20, (uVar10 & 0x7ffff) == 0)) {
          FUN_00e571b0((float)(int)uVar10 / fVar14);
          cVar3 = FUN_00e57240();
          if (cVar3 != '\0') {
            return 0;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
    lVar12 = uVar9 + 1;
    do {
      cVar3 = FUN_00e43e50();
      if (cVar3 == '\0') {
        cVar3 = FUN_00e573e0();
        if (cVar3 == '\0') {
LAB_00e56950:
          FUN_00e571b0(DAT_02390124);
          return 0;
        }
        if ((*(longlong *)(unaff_RDI + 0xb8) != 0) &&
           (uVar10 = uVar10 + 0x20, (uVar10 & 0x7ffff) == 0)) {
          FUN_00e571b0((float)(int)uVar10 / fVar14);
          cVar3 = FUN_00e57240();
          if (cVar3 != '\0') {
            return 0;
          }
        }
      }
      lVar12 = lVar12 + -1;
    } while (1 < lVar12);
  }
  if ((*(char *)(unaff_RDI + 0x2c) != '\0') && (0 < (int)uVar6)) {
    uVar11 = 0;
    do {
      if (*(int *)(unaff_RDI + 0x28) < 4) {
        iVar8 = (int)uVar11;
      }
      else {
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x78) + 0x10) + uVar11 * 4);
      }
      plVar2 = *(longlong **)
                (*(longlong *)(*(longlong *)(unaff_RDI + 0x40) + 0x10) + (longlong)iVar8 * 8);
      if (plVar2 != (longlong *)0x0) {
        *(undefined8 *)(unaff_RDI + 0xa8) =
             *(undefined8 *)
              (*(longlong *)(*(longlong *)(unaff_RDI + 0xa0) + 0x10) + (longlong)iVar8 * 8);
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x138))();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        if ((*(longlong *)(unaff_RDI + 0xb8) != 0) && (uVar10 = uVar10 + 1, (uVar10 & 0x7ffff) == 0)
           ) {
          FUN_00e571b0((float)(int)uVar10 / fVar14);
          cVar3 = FUN_00e57240();
          if (cVar3 != '\0') {
            return 0;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  lVar12 = *(longlong *)(unaff_RDI + 0x38);
  lVar1 = **(longlong **)(*(longlong *)(unaff_RDI + 0x40) + 0x10);
  if (lVar12 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
      lVar12 = *(longlong *)(unaff_RDI + 0x38);
    }
    *(longlong *)(unaff_RDI + 0x38) = lVar1;
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d216c0();
  if (*(longlong *)(unaff_RDI + 0x48) != 0) {
    *(undefined8 *)(unaff_RDI + 0x48) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x50) != 0) {
    *(undefined8 *)(unaff_RDI + 0x50) = 0;
    FUN_00d50b20();
  }
  FUN_00d216c0();
  FUN_00d216c0();
  if (*(longlong *)(unaff_RDI + 0x68) != 0) {
    *(undefined8 *)(unaff_RDI + 0x68) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    *(undefined8 *)(unaff_RDI + 0x70) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x78) != 0) {
    *(undefined8 *)(unaff_RDI + 0x78) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x80) != 0) {
    *(undefined8 *)(unaff_RDI + 0x80) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    *(undefined8 *)(unaff_RDI + 0x90) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
    *(undefined8 *)(unaff_RDI + 0xa0) = 0;
    FUN_00d50b20();
  }
  *(undefined8 *)(unaff_RDI + 0xa8) = 0;
LAB_00e56b81:
  FUN_00e571b0(DAT_02390124);
  return 1;
}


