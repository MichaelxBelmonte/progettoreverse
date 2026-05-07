// Function: FUN_017f55a0
// Address: 017f55a0
// Size: 4704 bytes
// Class: GNData
// String references:
//   "GNData"


/* WARNING: Removing unreachable block (ram,0x017f65f1) */
/* WARNING: Removing unreachable block (ram,0x017f5d28) */
/* WARNING: Removing unreachable block (ram,0x017f5d31) */
/* WARNING: Removing unreachable block (ram,0x017f5ecd) */
/* WARNING: Removing unreachable block (ram,0x017f5ed6) */
/* WARNING: Removing unreachable block (ram,0x017f5fed) */
/* WARNING: Removing unreachable block (ram,0x017f5ff9) */
/* WARNING: Removing unreachable block (ram,0x017f645a) */
/* WARNING: Removing unreachable block (ram,0x017f6466) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017f55a0(void)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  byte *pbVar8;
  float *pfVar9;
  int extraout_var;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  longlong **pplVar16;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined4 uVar20;
  float fVar21;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  float local_ac;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  undefined8 local_90;
  int local_88;
  longlong *local_78;
  char local_70;
  longlong *local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_00d4efa0();
  plVar2 = local_a8;
  if ((((local_a0 == '\0') && (local_a8 != (longlong *)0x0)) && (FUN_00d50b00(), local_a0 != '\0'))
     && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c84c80();
  plVar13 = local_a8;
  if (local_a0 == '\0') {
    if (local_a8 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_017f5663;
    }
  }
  else if (local_a8 != (longlong *)0x0) {
LAB_017f5663:
    pcVar1 = DAT_02572370;
    local_a0 = '\0';
    local_a8 = (longlong *)0x0;
    local_98 = plVar13;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_90._4_4_ = 0;
    while( true ) {
      if (local_90._4_4_ != 0) {
        if (local_90._4_4_ < 1) {
          iVar15 = -local_90._4_4_;
        }
        else {
          iVar15 = (int)local_90 - local_90._4_4_;
          local_90 = CONCAT44(local_90._4_4_,iVar15);
          FUN_00d23690();
          local_88 = local_88 + local_90._4_4_;
          iVar15 = 0;
        }
        local_90 = CONCAT44(iVar15,(int)local_90);
      }
      lVar6 = (longlong)(int)local_90;
      iVar15 = (int)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,iVar15);
      if (*(int *)((longlong)local_98 + 0xc) <= iVar15) break;
      local_a8 = *(longlong **)(local_98[2] + 8 + lVar6 * 8);
      FUN_00d74120();
      plVar13 = local_58;
      lVar6 = DAT_027d4cb0;
      if (DAT_027d4cb0 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*plVar13 + 0x50))();
      cVar3 = '\x01';
      if (cVar5 == '\0') {
        FUN_00d74120();
        lVar11 = DAT_027d4cb8;
        if (DAT_027d4cb8 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*local_78 + 0x50))();
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar13 = local_a8;
      if (cVar3 == '\0') {
        FUN_000274b0();
        pplVar16 = (longlong **)&DAT_02802688;
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar16 = &local_a8;
          if (cVar5 == '\0') {
            pplVar16 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar16 != (longlong *)0x0) {
          FUN_00c77cd0();
          uVar4 = FUN_00c7b220();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          switch(uVar4) {
          case 0x40:
            (**(code **)(*(longlong *)**(undefined8 **)(*unaff_RDI + 0x10) + 0x210))();
            plVar13 = local_58;
            if ((DAT_026d0220 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
              _DAT_02789148 = FUN_00d4fe50();
              DAT_02789130 = "GNData";
              _DAT_02789138 = 0x28;
              _DAT_02789140 = FUN_000378a0;
              _DAT_02789150 = 0;
              uRam0000000002789158 = 0;
              _DAT_02789160 = 0;
              uRam0000000002789168 = 0;
              _DAT_02789170 = 0;
              uRam0000000002789178 = 0;
              _DAT_02789180 = 0;
              uRam0000000002789188 = 0;
              _DAT_02789190 = 0;
              uRam0000000002789198 = 0;
              _DAT_027891a0 = 0;
              uRam00000000027891a8 = 0;
              _DAT_027891b0 = 0;
              uRam00000000027891b8 = 0;
              _DAT_027891c0 = 0;
              uRam00000000027891c8 = 0;
              _DAT_027891d0 = 0;
              uRam00000000027891d8 = 0;
              _DAT_027891e0 = 0;
              uRam00000000027891e8 = 0;
              _DAT_027891f0 = 0;
              ___cxa_guard_release();
            }
            pplVar16 = (longlong **)&DAT_02802688;
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x360))();
              cVar5 = FUN_00e85ea0();
              pplVar16 = &local_58;
              if (cVar5 == '\0') {
                pplVar16 = (longlong **)&DAT_02802688;
              }
            }
            plVar13 = *pplVar16;
            if (*(char *)(pplVar16 + 1) == '\0') {
              if (plVar13 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar16 + 1) = 0;
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar19 = plVar13;
            if (plVar13 != (longlong *)0x0) {
              local_70 = '\0';
              FUN_00c8e4f0();
              plVar19 = local_58;
              if (local_50 == '\0') {
                if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                   (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
              }
              FUN_00c92170();
              FUN_00c92160();
              if (plVar13 == plVar19) {
                FUN_00d50b20();
                plVar19 = plVar13;
              }
              else {
                FUN_00d50b20();
              }
              if ((plVar19 != (longlong *)0x0) && (3 < (int)plVar19[3])) {
                if (*unaff_RDI == 0) {
                  iVar15 = *(int *)(*unaff_RDI + 0xc);
                  lVar6 = plVar19[2];
                  iVar14 = (int)plVar19[3];
                  iVar12 = iVar14 + 3;
                  if (-1 < iVar14) {
                    iVar12 = iVar14;
                  }
                  lVar11 = 0;
                  do {
                    *(float *)(lVar6 + lVar11 * 4) = 0.0 / (float)iVar15;
                    lVar11 = lVar11 + 1;
                  } while ((int)lVar11 < iVar12 >> 2);
                }
                else {
                  uVar18 = 0;
                  do {
                    if (*unaff_RDI == 0) {
                      local_ac = 0.0;
                      lVar6 = 0;
                    }
                    else {
                      local_50 = '\0';
                      local_58 = (longlong *)0x0;
                      local_40 = 0xffffffff;
                      local_38 = 0;
                      local_ac = 0.0;
                      local_48 = *unaff_RDI;
                      while( true ) {
                        lVar6 = (longlong)(int)local_40;
                        iVar15 = (int)local_40 + 1;
                        local_40 = CONCAT44(local_40._4_4_,iVar15);
                        if (*(int *)(local_48 + 0xc) <= iVar15) break;
                        local_58 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar6 * 8);
                        (**(code **)(*local_58 + 0x210))(*(longlong *)(local_48 + 0x10),local_a8);
                        if (plVar13 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        fVar21 = *(float *)(plVar13[2] + uVar18 * 4);
                        FUN_00d50b20();
                        local_ac = local_ac + fVar21;
                        if (local_40._4_4_ != 0) {
                          if (local_40 < 0) {
                            iVar15 = -local_40._4_4_;
                          }
                          else {
                            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                            FUN_00d23690();
                            local_38 = local_38 + local_40._4_4_;
                            iVar15 = 0;
                          }
                          local_40 = CONCAT44(iVar15,(int)local_40);
                        }
                      }
                      FUN_00083b20();
                      lVar6 = *unaff_RDI;
                    }
                    *(float *)(plVar19[2] + uVar18 * 4) = local_ac / (float)*(int *)(lVar6 + 0xc);
                    uVar17 = (int)uVar18 + 1;
                    uVar18 = (ulonglong)uVar17;
                    iVar15 = (int)plVar19[3];
                    iVar14 = iVar15 + 3;
                    if (-1 < iVar15) {
                      iVar14 = iVar15;
                    }
                  } while ((int)uVar17 < iVar14 >> 2);
                }
              }
              (**(code **)(*(longlong *)*unaff_RSI + 0x200))(0,local_a8,1);
              local_78 = plVar13;
            }
            if (plVar19 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            break;
          case 0x62:
            if (*unaff_RDI == 0) {
              iVar15 = 0;
            }
            else {
              local_50 = '\0';
              local_58 = (longlong *)0x0;
              local_40 = 0xffffffff;
              local_38 = 0;
              iVar15 = 0;
              local_48 = *unaff_RDI;
              while( true ) {
                lVar6 = (longlong)(int)local_40;
                iVar14 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar14);
                if (*(int *)(local_48 + 0xc) <= iVar14) break;
                local_58 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar6 * 8);
                pbVar8 = (byte *)(**(code **)(*local_58 + 0x218))();
                iVar15 = iVar15 + (uint)*pbVar8;
                if (local_40._4_4_ != 0) {
                  if (local_40 < 0) {
                    iVar14 = -local_40._4_4_;
                  }
                  else {
                    local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar14 = 0;
                  }
                  local_40 = CONCAT44(iVar14,(int)local_40);
                }
              }
              FUN_00083b20();
            }
            local_58 = (longlong *)CONCAT71(local_58._1_7_,0 < iVar15);
            (**(code **)(*(longlong *)*unaff_RSI + 0x208))(1);
            break;
          case 0x65:
          case 0x69:
            local_78._0_4_ = 0.0;
            if (*unaff_RDI == 0) {
              local_78._0_4_ = 0.0;
              lVar6 = 0;
            }
            else {
              local_50 = '\0';
              local_58 = (longlong *)0x0;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_48 = *unaff_RDI;
              while( true ) {
                lVar6 = (longlong)(int)local_40;
                iVar15 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar15);
                if (*(int *)(local_48 + 0xc) <= iVar15) break;
                local_58 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar6 * 8);
                piVar7 = (int *)(**(code **)(*local_58 + 0x218))();
                local_78._0_4_ = (float)((int)local_78._0_4_ + *piVar7);
                if (local_40._4_4_ != 0) {
                  if (local_40 < 0) {
                    iVar15 = -local_40._4_4_;
                  }
                  else {
                    local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar15 = 0;
                  }
                  local_40 = CONCAT44(iVar15,(int)local_40);
                }
              }
              FUN_00083b20();
              lVar6 = *unaff_RDI;
            }
            local_78 = (longlong *)
                       CONCAT44(local_78._4_4_,(int)local_78._0_4_ / *(int *)(lVar6 + 0xc));
            (**(code **)(*(longlong *)*unaff_RSI + 0x208))(1);
            break;
          case 0x66:
            local_78._0_4_ = 0.0;
            if (*unaff_RDI == 0) {
              local_78._0_4_ = 0.0;
              lVar6 = 0;
            }
            else {
              local_50 = '\0';
              local_58 = (longlong *)0x0;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_48 = *unaff_RDI;
              while( true ) {
                lVar6 = (longlong)(int)local_40;
                iVar15 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar15);
                if (*(int *)(local_48 + 0xc) <= iVar15) break;
                local_58 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar6 * 8);
                pfVar9 = (float *)(**(code **)(*local_58 + 0x218))();
                local_78._0_4_ = *pfVar9 + local_78._0_4_;
                if (local_40._4_4_ != 0) {
                  if (local_40 < 0) {
                    iVar15 = -local_40._4_4_;
                  }
                  else {
                    local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar15 = 0;
                  }
                  local_40 = CONCAT44(iVar15,(int)local_40);
                }
              }
              FUN_00083b20();
              lVar6 = *unaff_RDI;
            }
            local_78 = (longlong *)
                       CONCAT44(local_78._4_4_,local_78._0_4_ / (float)*(int *)(lVar6 + 0xc));
            (**(code **)(*(longlong *)*unaff_RSI + 0x208))(1);
            break;
          case 0x6c:
            local_78 = (longlong *)0x0;
            if (*unaff_RDI == 0) {
              local_78 = (longlong *)0x0;
              lVar6 = 0;
            }
            else {
              local_50 = '\0';
              local_58 = (longlong *)0x0;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_48 = *unaff_RDI;
              while( true ) {
                lVar6 = (longlong)(int)local_40;
                iVar15 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar15);
                if (*(int *)(local_48 + 0xc) <= iVar15) break;
                local_58 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar6 * 8);
                plVar13 = (longlong *)(**(code **)(*local_58 + 0x218))();
                local_78 = (longlong *)((longlong)local_78 + *plVar13);
                if (local_40._4_4_ != 0) {
                  if (local_40 < 0) {
                    iVar15 = -local_40._4_4_;
                  }
                  else {
                    local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar15 = 0;
                  }
                  local_40 = CONCAT44(iVar15,(int)local_40);
                }
              }
              FUN_00083b20();
              lVar6 = *unaff_RDI;
            }
            uVar17 = *(uint *)(lVar6 + 0xc);
            if (((ulonglong)local_78 | (longlong)(int)uVar17) >> 0x20 == 0) {
              local_78 = (longlong *)(((ulonglong)local_78 & 0xffffffff) / (ulonglong)uVar17);
            }
            else {
              local_78 = (longlong *)((longlong)local_78 / (longlong)(int)uVar17);
            }
            (**(code **)(*(longlong *)*unaff_RSI + 0x208))(1);
          }
        }
        cVar5 = (**(code **)(*local_a8 + 0x370))();
        if (((cVar5 != '\0') && (FUN_00d77bd0(), extraout_var == 1)) &&
           (cVar5 = FUN_00d77e10(), cVar5 != '\0')) {
          puVar10 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &DAT_02572358;
          uVar20 = (*pcVar1)();
          if (*unaff_RDI != 0) {
            local_50 = '\0';
            local_58 = (longlong *)0x0;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_40._4_4_ = 0;
            local_48 = *unaff_RDI;
            while( true ) {
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  iVar15 = -local_40._4_4_;
                }
                else {
                  iVar15 = (int)local_40 - local_40._4_4_;
                  local_40 = CONCAT44(local_40._4_4_,iVar15);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar15 = 0;
                }
                local_40 = CONCAT44(iVar15,(int)local_40);
              }
              lVar6 = (longlong)(int)local_40;
              iVar15 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar15);
              if (*(int *)(local_48 + 0xc) <= iVar15) break;
              local_58 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar6 * 8);
              (**(code **)(*local_58 + 0x210))(*(longlong *)(local_48 + 0x10),local_a8);
              if (local_70 == '\0') {
                if (local_78 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_70 = '\0';
              }
              FUN_00d21140();
              if (local_78 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            uVar20 = FUN_00083b20();
          }
          (**(code **)(*(longlong *)*unaff_RSI + 0x210))(uVar20,local_a8);
          plVar13 = local_58;
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_017f55a0();
          if (plVar13 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar10 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_00d74c70();
    FUN_00d50b20();
  }
  plVar13 = (longlong *)*unaff_RSI;
  FUN_011b2c10();
  if (plVar13 == (longlong *)0x0) {
LAB_017f6376:
    plVar13 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar13 = unaff_RSI;
    if (cVar5 == '\0') goto LAB_017f6376;
  }
  lVar6 = DAT_027d4cc0;
  if (*plVar13 == 0) goto LAB_017f67e2;
  if (DAT_027d4cc0 != 0) {
    FUN_00d50b00();
  }
  pplVar16 = &local_a8;
  (**(code **)(*(longlong *)**(undefined8 **)(*unaff_RDI + 0x10) + 0x88))();
  plVar13 = local_a8;
  if ((DAT_026d0220 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
    _DAT_02789148 = FUN_00d4fe50();
    DAT_02789130 = "GNData";
    _DAT_02789138 = 0x28;
    _DAT_02789140 = FUN_000378a0;
    _DAT_02789150 = 0;
    uRam0000000002789158 = 0;
    _DAT_02789160 = 0;
    uRam0000000002789168 = 0;
    _DAT_02789170 = 0;
    uRam0000000002789178 = 0;
    _DAT_02789180 = 0;
    uRam0000000002789188 = 0;
    _DAT_02789190 = 0;
    uRam0000000002789198 = 0;
    _DAT_027891a0 = 0;
    uRam00000000027891a8 = 0;
    _DAT_027891b0 = 0;
    uRam00000000027891b8 = 0;
    _DAT_027891c0 = 0;
    uRam00000000027891c8 = 0;
    _DAT_027891d0 = 0;
    uRam00000000027891d8 = 0;
    _DAT_027891e0 = 0;
    uRam00000000027891e8 = 0;
    _DAT_027891f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (longlong *)0x0) {
LAB_017f640e:
    pplVar16 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_017f640e;
  }
  plVar13 = *pplVar16;
  if (*(char *)(pplVar16 + 1) == '\0') {
    if (plVar13 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar16 + 1) = 0;
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_50 = '\0';
  local_58 = plVar13;
  FUN_00c8e4f0();
  plVar19 = local_a8;
  if (local_a0 == '\0') {
    if (((local_a8 != (longlong *)0x0) && (FUN_00d50b00(), local_a0 != '\0')) &&
       (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a0 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  fVar21 = (float)FUN_00c92160();
  if (plVar13 == plVar19) {
    plVar19 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      fVar21 = (float)FUN_00d50b20();
    }
  }
  else if (plVar13 != (longlong *)0x0) {
    fVar21 = (float)FUN_00d50b20();
  }
  if ((plVar19 != (longlong *)0x0) && (3 < (int)plVar19[3])) {
    uVar17 = 0;
    do {
      if ((longlong *)*unaff_RDI == (longlong *)0x0) {
        local_ac = 0.0;
        lVar11 = 0;
      }
      else {
        local_a0 = '\0';
        local_a8 = (longlong *)0x0;
        local_90 = 0xffffffff;
        local_88 = 0;
        local_ac = 0.0;
        local_98 = (longlong *)*unaff_RDI;
        while( true ) {
          lVar11 = (longlong)(int)local_90;
          iVar15 = (int)local_90 + 1;
          local_90 = CONCAT44(local_90._4_4_,iVar15);
          if (*(int *)((longlong)local_98 + 0xc) <= iVar15) break;
          local_a8 = *(longlong **)(local_98[2] + 8 + lVar11 * 8);
          local_100 = lVar6;
          local_f8 = '\0';
          (**(code **)(*local_a8 + 0x88))(local_98[2],&local_100);
          plVar13 = local_58;
          if (local_50 == '\0') {
            if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
               (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50 = '\0';
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          fVar21 = *(float *)(plVar13[2] + (ulonglong)uVar17 * 4);
          FUN_00d50b20();
          local_ac = local_ac + fVar21;
          if (local_90._4_4_ != 0) {
            if (local_90._4_4_ < 1) {
              iVar15 = -local_90._4_4_;
            }
            else {
              local_90 = CONCAT44(local_90._4_4_,(int)local_90 - local_90._4_4_);
              FUN_00d23690();
              local_88 = local_88 + local_90._4_4_;
              iVar15 = 0;
            }
            local_90 = CONCAT44(iVar15,(int)local_90);
          }
        }
        FUN_00083b20();
        lVar11 = *unaff_RDI;
      }
      fVar21 = (float)*(int *)(lVar11 + 0xc);
      *(float *)(plVar19[2] + (ulonglong)uVar17 * 4) = local_ac / fVar21;
      uVar17 = uVar17 + 1;
      iVar15 = (int)plVar19[3];
      iVar14 = iVar15 + 3;
      if (-1 < iVar15) {
        iVar14 = iVar15;
      }
    } while ((int)uVar17 < iVar14 >> 2);
  }
  local_e8 = '\0';
  local_e0 = lVar6;
  local_d8 = '\0';
  local_f0 = plVar19;
  (**(code **)(*(longlong *)*unaff_RSI + 0x80))(fVar21,&local_e0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar19 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
LAB_017f67e2:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


