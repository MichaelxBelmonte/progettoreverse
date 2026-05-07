// Function: FUN_002da9e0
// Address: 002da9e0
// Size: 1743 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x002dae15) */
/* WARNING: Removing unreachable block (ram,0x002dae98) */

void FUN_002da9e0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 in_XMM1_Qb;
  undefined8 uVar12;
  undefined1 auVar11 [16];
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_30;
  char local_28;
  
  FUN_01e53f10();
  FUN_002d96b0();
  plVar1 = *(longlong **)(unaff_RDI + 0x70);
  plVar6 = plVar1;
  if (plVar1 != local_30) {
    plVar6 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        goto LAB_002daa1b;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x70);
      *(longlong **)(unaff_RDI + 0x70) = local_30;
    }
    else {
      local_28 = '\0';
LAB_002daa1b:
      *(longlong **)(unaff_RDI + 0x70) = plVar6;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar6 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_002d9a60();
  plVar1 = *(longlong **)(unaff_RDI + 0x78);
  plVar6 = plVar1;
  if (plVar1 == local_30) goto LAB_002daad2;
  plVar6 = local_30;
  if (local_28 == '\0') {
    if (local_30 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      goto LAB_002daa90;
    }
    FUN_00d50b00();
    plVar1 = *(longlong **)(unaff_RDI + 0x78);
    *(longlong **)(unaff_RDI + 0x78) = local_30;
  }
  else {
    local_28 = '\0';
LAB_002daa90:
    *(longlong **)(unaff_RDI + 0x78) = plVar6;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar6 = local_30;
  }
LAB_002daad2:
  if ((local_28 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x78) != 0) {
    if (*(longlong *)(*(longlong *)(unaff_RDI + 0x78) + 0x308) == 0) {
      if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
        FUN_01e40eb0();
        if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_30 != (longlong *)0x0) {
          (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x478))();
        }
      }
      if (*(longlong *)(unaff_RDI + 0x98) != 0) {
        FUN_01e40eb0();
        if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_30 == (longlong *)0x0) {
          FUN_01e53c20();
          lVar7 = *(longlong *)(unaff_RDI + 0x98);
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(MACH_HEADER._0_8_ + 0x450))();
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
        }
      }
      if (*(longlong *)(unaff_RDI + 0xa8) == 0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_0006daf0();
        *(undefined4 *)(puVar5 + 0x27) = 0;
        puVar5[0x2e] = 0;
        *(undefined4 *)(puVar5 + 0x2f) = 0;
        puVar5[0x30] = 0;
        *(undefined1 *)(puVar5 + 0x31) = 0;
        puVar5[0x28] = 0;
        puVar5[0x29] = 0;
        *(undefined4 *)(puVar5 + 0x2a) = 0;
        puVar5[0x2b] = 0;
        puVar5[0x2c] = 0;
        *(undefined8 *)((longlong)puVar5 + 0x165) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x18c) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x194) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x199) = 0;
        puVar5[0x35] = 0;
        puVar5[0x36] = 0;
        puVar5[0x37] = 0;
        puVar5[0x38] = 0;
        *puVar5 = &DAT_02683800;
        puVar5[2] = &DAT_026842c8;
        puVar5[0x39] = 0;
        puVar5[0x3a] = 0;
        (*DAT_02683818)();
        puVar2 = *(undefined8 **)(unaff_RDI + 0xa8);
        if (puVar2 == puVar5) {
          FUN_00d50b20();
        }
        else {
          *(undefined8 **)(unaff_RDI + 0xa8) = puVar5;
          if (puVar2 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_01e3f820();
        fVar9 = (float)FUN_00d05530();
        (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x4d0))(fVar9 + DAT_023b1608);
        lVar7 = DAT_026fdec8;
        plVar1 = *(longlong **)(unaff_RDI + 0xa8);
        if (DAT_026fdec8 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        plVar1 = *(longlong **)(unaff_RDI + 0xa8);
        (**(code **)(*plVar1 + 0x640))();
        (**(code **)(*local_90 + 0x370))();
        FUN_01d44d80(DAT_023b160c);
        if (local_28 == '\0') {
          if (local_30 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_28 = '\0';
        }
        (**(code **)(*plVar1 + 0x9d8))();
        if (local_30 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x9c8))();
        plVar1 = *(longlong **)(unaff_RDI + 0x98);
        lVar7 = *(longlong *)(unaff_RDI + 0xa8);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x450))();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      lVar7 = *(longlong *)(unaff_RDI + 0x98);
    }
    else {
      if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
        FUN_01e40eb0();
        if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_30 == (longlong *)0x0) {
          FUN_01e53c20();
          lVar7 = *(longlong *)(unaff_RDI + 0xa0);
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(MACH_HEADER._0_8_ + 0x450))();
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
        }
      }
      if (*(longlong *)(unaff_RDI + 0x98) != 0) {
        FUN_01e40eb0();
        if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_30 != (longlong *)0x0) {
          FUN_01e40eb0();
          uVar8 = (**(code **)(*local_30 + 0x4d8))();
          if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x4d8))();
          uVar10 = param_2;
          uVar12 = in_XMM1_Qb;
          (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x4d8))();
          FUN_01e40eb0();
          auVar11._8_8_ = in_XMM1_Qb;
          auVar11._0_8_ = param_2;
          auVar3._8_8_ = uVar12;
          auVar3._0_8_ = uVar10;
          auVar11 = blendps(auVar11,auVar3,2);
          (**(code **)(*local_30 + 0x4d0))(uVar8,auVar11._0_8_);
          if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x478))();
        }
      }
      lVar7 = *(longlong *)(unaff_RDI + 0xa0);
    }
    bVar4 = lVar7 == 0;
    if (bVar4) {
      lVar7 = 0;
    }
    else {
      FUN_00d50b00();
    }
    MACH_HEADER.magic = MACH_HEADER.magic;
    MACH_HEADER.cputype = MACH_HEADER.cputype;
    FUN_002d9d70();
    FUN_002da3e0();
    FUN_002db430();
    if (!bVar4 && lVar7 != 0) {
      FUN_00d50b20();
    }
    return;
  }
  return;
}


