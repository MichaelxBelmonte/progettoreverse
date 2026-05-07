// Function: FUN_01e440a0
// Address: 01e440a0
// Size: 1661 bytes
// Class: GNTextView


/* WARNING: Removing unreachable block (ram,0x01e440fb) */
/* WARNING: Removing unreachable block (ram,0x01e44107) */

void FUN_01e440a0(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  longlong *local_a8;
  char local_a0;
  undefined8 *local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_1[1];
  local_98 = param_2;
  (**(code **)(*(longlong *)*unaff_RSI + 0x610))(*param_1);
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_90 + 0x6c0))();
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    return;
  }
  plVar3 = (longlong *)unaff_RDI[6];
  while (plVar6 = plVar3, plVar6 != (longlong *)0x0) {
    plVar3 = (longlong *)plVar6[6];
    unaff_RDI = plVar6;
    if ((longlong *)plVar6[6] == plVar6) {
      plVar3 = plVar6;
    }
  }
  cVar4 = (**(code **)(*unaff_RDI + 0x4b8))();
  if (cVar4 == '\0') {
    return;
  }
  FUN_00d50b00();
  FUN_01d8c6e0();
  plVar3 = local_90;
  if (local_88 == '\0') {
    if (local_90 == (longlong *)0x0) goto LAB_01e446ee;
    FUN_00d50b00();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_90 == (longlong *)0x0) goto LAB_01e446ee;
  local_b0 = plVar3;
  FUN_01f27fe0();
  FUN_01f30840();
  plVar3 = local_90;
  if (local_88 == '\0') {
    if (((local_90 != (longlong *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
       (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    local_88 = '\0';
    local_90 = (longlong *)0x0;
    local_80 = plVar3;
    local_70 = 0;
    local_78 = 0;
    if (0 < *(int *)((longlong)plVar3 + 0xc)) {
      uVar8 = 0;
      do {
        lVar2 = DAT_027f3ca0;
        plVar6 = *(longlong **)(plVar3[2] + (ulonglong)uVar8 * 8);
        local_90 = plVar6;
        if (DAT_027f3ca0 != 0) {
          FUN_00d50b00();
        }
        cVar4 = FUN_00d50f90();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          (**(code **)(*plVar6 + 0x4a0))();
          plVar6 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01e44350;
            }
          }
          else if (local_68 != (longlong *)0x0) {
LAB_01e44350:
            local_60 = '\0';
            local_68 = (longlong *)0x0;
            local_58 = plVar6;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_50._4_4_ = 0;
            while( true ) {
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar7 = -local_50._4_4_;
                }
                else {
                  iVar7 = (int)local_50 - local_50._4_4_;
                  local_50 = CONCAT44(local_50._4_4_,iVar7);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar7 = 0;
                }
                local_50 = CONCAT44(iVar7,(int)local_50);
              }
              lVar2 = DAT_027f3ca8;
              lVar5 = (longlong)(int)local_50;
              iVar7 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar7);
              if (*(int *)((longlong)local_58 + 0xc) <= iVar7) break;
              local_68 = *(longlong **)(local_58[2] + 8 + lVar5 * 8);
              if (DAT_027f3ca8 != 0) {
                FUN_00d50b00();
              }
              cVar4 = FUN_00d50f90();
              uVar9 = extraout_XMM0_Qa;
              if (lVar2 != 0) {
                uVar9 = FUN_00d50b20();
              }
              plVar6 = local_68;
              lVar2 = DAT_0276caa0;
              if (cVar4 != '\0') {
                if (DAT_0276caa0 != 0) {
                  uVar9 = FUN_00d50b00();
                }
                local_c0 = lVar2;
                local_b8 = '\x01';
                (**(code **)(*plVar6 + 0x88))(uVar9,&local_c0);
                plVar6 = local_40;
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != 0)) {
                  FUN_00d50b20();
                }
                if (plVar6 == local_b0) {
                  auVar15._0_8_ = (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
                  auVar15._8_8_ = extraout_XMM0_Qb;
                  auVar14 = roundss(ZEXT816(0),auVar15,9);
                  if ((float)auVar15._0_8_ - auVar14._0_4_ <= DAT_0239424c) {
                    auVar14._4_4_ = (float)((ulonglong)auVar15._0_8_ >> 0x20);
                    auVar14._0_4_ = auVar14._4_4_;
                    auVar14._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
                    auVar14._8_4_ = auVar14._12_4_;
                    auVar15 = roundss(ZEXT816(0),auVar14,9);
                    if (auVar14._4_4_ - auVar15._0_4_ <= DAT_0239424c) {
                      auVar10._0_12_ = ZEXT812(0);
                      auVar10._12_4_ = 0;
                      auVar15 = roundss(auVar10,auVar12,9);
                      fVar13 = auVar12._4_4_;
                      if ((auVar12._0_4_ - auVar15._0_4_ <= DAT_0239424c) &&
                         (auVar11._4_4_ = fVar13, auVar11._0_4_ = fVar13,
                         auVar11._8_4_ = auVar12._12_4_, auVar11._12_4_ = auVar12._12_4_,
                         auVar12 = roundss(ZEXT816(0),auVar11,9),
                         fVar13 - auVar12._0_4_ <= DAT_0239424c)) goto LAB_01e44380;
                    }
                  }
                  if ((DAT_028b9dd0 == (longlong *)0x0) || (DAT_028b9dd9 == '\0')) {
                    FUN_00e8cb50();
                    if (DAT_028b9dd0 == (longlong *)0x0) {
                      FUN_01cfcdc0();
                      plVar6 = DAT_028b9dd0;
                      if (DAT_028b9dd0 != local_40) {
                        if (local_38 == '\0') {
                          if (local_40 == (longlong *)0x0) {
                            plVar6 = (longlong *)0x0;
                          }
                          else {
                            FUN_00d50b00();
                            plVar6 = local_40;
                          }
                        }
                        else {
                          local_38 = '\0';
                          plVar6 = local_40;
                        }
                        bVar1 = DAT_028b9dd0 != (longlong *)0x0;
                        DAT_028b9dd0 = plVar6;
                        if (bVar1) {
                          FUN_00d50b20();
                          plVar6 = local_40;
                        }
                      }
                      if ((plVar6 != (longlong *)0x0) && (DAT_028b9dd8 == '\0')) {
                        DAT_028b9dd8 = '\x01';
                        FUN_00e8cb90();
                        plVar6 = local_40;
                      }
                      if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      DAT_028b9dd9 = '\x01';
                      FUN_00e8cb70();
                    }
                    else {
                      DAT_028b9dd9 = '\x01';
                      FUN_00e8cb70();
                    }
                  }
                  FUN_01d48370();
                  plVar6 = DAT_028b9dd0;
                  local_a0 = 0;
                  if (DAT_028b9dd0 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  local_a8 = plVar6;
                  local_a0 = '\x01';
                  FUN_01d488d0();
                  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = *(ulonglong *)(*unaff_RSI + 0x114);
                  (**(code **)(*(longlong *)*local_98 + 0x3b8))();
                  FUN_01d48390();
                }
              }
LAB_01e44380:
            }
            FUN_000ad7a0();
            FUN_00d50b20();
          }
        }
        uVar8 = uVar8 + 1;
        local_78 = CONCAT44(local_78._4_4_,uVar8);
      } while ((int)uVar8 < *(int *)((longlong)plVar3 + 0xc));
    }
    FUN_01e4f040();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01e446ee:
  FUN_00d50b20();
  return;
}


