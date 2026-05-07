// Function: FUN_01a42180
// Address: 01a42180
// Size: 2617 bytes
// Class: MUScalePitchSystem


int FUN_01a42180(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *unaff_RDI;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  double dVar13;
  undefined1 uVar14;
  longlong local_130;
  undefined1 local_128;
  longlong local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  double local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  char local_80 [8];
  longlong local_78;
  undefined8 local_70;
  int local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  
  local_c0 = param_1;
  (**(code **)(*(longlong *)*unaff_RDI + 0xe20))();
  local_a8 = local_60;
  local_a0 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_a0 = '\x01';
  FUN_00243390();
  lVar9 = local_88;
  if (local_80[0] == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(lVar9 + 0xc) == 0) {
    iVar7 = 0;
    goto LAB_01a42bdc;
  }
  local_c8 = lVar9;
  (**(code **)(*(longlong *)*unaff_RDI + 0xe20))();
  lVar3 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_01a40b30(local_c0);
  local_90 = local_88;
  if ((local_80[0] == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  uVar12 = FUN_00c9fe20();
  lVar3 = local_88;
  plVar6 = &local_60;
  if (local_80[0] != '\0') {
    plVar6 = (longlong *)local_80;
  }
  local_60 = CONCAT71(local_60._1_7_,local_80[0]);
  *(undefined1 *)plVar6 = 0;
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((char)local_60 == '\0') {
    if (lVar3 != 0) {
      uVar12 = FUN_00d50b00();
      goto LAB_01a42383;
    }
LAB_01a42752:
    iVar7 = 0;
  }
  else {
    if (lVar3 == 0) goto LAB_01a42752;
LAB_01a42383:
    iVar7 = 0;
    if (*(int *)(lVar3 + 0xc) == 0) {
LAB_01a42bc1:
      FUN_00d50b20();
    }
    else {
      local_80[0] = '\0';
      local_88 = 0;
      local_98 = lVar3;
      local_78 = lVar3;
      local_70 = 0xffffffff;
      local_68 = 0;
      while( true ) {
        if (iVar7 != 0) {
          if (iVar7 < 1) {
            iVar7 = -iVar7;
          }
          else {
            local_70 = CONCAT44(local_70._4_4_,(int)local_70 - iVar7);
            FUN_00d23690(uVar12,iVar7);
            local_68 = local_68 + local_70._4_4_;
            iVar7 = 0;
          }
          local_70 = CONCAT44(iVar7,(int)local_70);
        }
        lVar3 = (longlong)(int)local_70;
        iVar7 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar7);
        if (*(int *)(local_78 + 0xc) <= iVar7) {
          FUN_00115190();
          local_80[0] = '\0';
          local_88 = 0;
          local_78 = local_98;
          local_70 = 0xffffffff;
          local_68 = 0;
          local_70._4_4_ = 0;
          while( true ) {
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar7 = -local_70._4_4_;
              }
              else {
                iVar7 = (int)local_70 - local_70._4_4_;
                local_70 = CONCAT44(local_70._4_4_,iVar7);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar7 = 0;
              }
              local_70 = CONCAT44(iVar7,(int)local_70);
            }
            lVar3 = (longlong)(int)local_70;
            iVar7 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar7);
            if (*(int *)(local_78 + 0xc) <= iVar7) break;
            local_108 = *(longlong *)(*(longlong *)(local_78 + 0x10) + 8 + lVar3 * 8);
            uVar14 = 0;
            local_100 = '\0';
            local_88 = local_108;
            FUN_0076f110(*unaff_RDI,&local_108);
            lVar3 = local_60;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_128 = 1;
            local_130 = lVar3;
            uVar2 = (**(code **)((longlong)&dylib_command_00001220.dylib.current_version +
                                *(longlong *)*unaff_RDI))();
            FUN_01a41040(local_c0,&local_130,uVar2,param_4,uVar14);
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00115190();
          FUN_00d23310();
          lVar3 = local_88;
          plVar6 = (longlong *)local_80;
          if (local_80[0] == '\0') {
            plVar6 = &local_60;
          }
          local_60 = CONCAT71(local_60._1_7_,local_80[0]);
          *(char *)plVar6 = '\0';
          if ((local_80[0] != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific((pthread_key_t)plVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar7 = FUN_01326de0();
          if (((char)local_60 != '\0') && (lVar3 != 0)) {
            FUN_00d50b20();
          }
          bVar11 = false;
          if ((*(int *)(local_98 + 0xc) == 1) && (iVar7 != 3)) {
            bVar11 = *(int *)(lVar9 + 0xc) == 2;
          }
          uVar12 = (**(code **)(*(longlong *)*unaff_RDI + 0xda0))();
          if (bVar11) {
            plVar6 = *(longlong **)(lVar9 + 0x10);
            lVar3 = *plVar6;
            if (lVar3 != 0) {
              FUN_00d50b00();
              plVar6 = *(longlong **)(lVar9 + 0x10);
            }
            lVar8 = plVar6[1];
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            pVar5 = (pthread_key_t)plVar6;
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c0 = (double)FUN_0125a280();
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar13 = (double)FUN_0125a280();
            if (dVar13 <= local_c0) {
              local_d0 = '\0';
              local_d8 = lVar8;
              (**(code **)(*(longlong *)*unaff_RDI + 0xda8))(dVar13,1);
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_e0 = '\0';
              local_e8 = lVar3;
              (**(code **)(*(longlong *)*unaff_RDI + 0xda8))(dVar13,1);
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            iVar7 = 1;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            local_f0 = '\0';
            local_f8 = lVar9;
            (**(code **)(*(longlong *)*unaff_RDI + 0xdb8))(uVar12,1);
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            (**(code **)(*(longlong *)*unaff_RDI + 0xea0))();
            iVar7 = 1;
            (**(code **)(*(longlong *)*unaff_RDI + 0xda0))();
          }
          goto LAB_01a42bb5;
        }
        local_88 = *(longlong *)(*(longlong *)(local_78 + 0x10) + 8 + lVar3 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_78 + 0x10));
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar7 = FUN_0132dd30();
        if (iVar7 == 0) break;
        local_118 = local_88;
        local_110 = '\0';
        uVar12 = FUN_0076f110();
        lVar3 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != 0) && (uVar12 = FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
            uVar12 = FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if (lVar3 != 0) {
          local_58 = '\0';
          local_60 = 0;
          local_120 = lVar3;
          local_50 = lVar3;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          bVar11 = false;
          lVar9 = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar7 = -local_48._4_4_;
              }
              else {
                iVar7 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar7);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar7 = 0;
              }
              local_48 = CONCAT44(iVar7,(int)local_48);
            }
            lVar3 = (longlong)(int)local_48;
            iVar10 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar10);
            iVar7 = *(int *)(local_50 + 0xc);
            if (iVar7 <= iVar10) break;
            local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar3 * 8);
            pVar5 = (pthread_key_t)*(longlong *)(local_50 + 0x10);
            bVar1 = bVar11;
            if (local_40 == 0 && iVar10 == 0) {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              lVar8 = local_b8;
              if (lVar9 == local_b8) {
                lVar8 = lVar9;
                if ((!bVar11) && (lVar9 != 0)) {
                  bVar1 = true;
                  if (local_b0 != '\0') goto LAB_01a42506;
                  FUN_00d50b00();
                  bVar1 = true;
                }
              }
              else {
                if (local_b0 != '\0') {
                  bVar1 = true;
                  if ((bVar11) && (lVar9 != 0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01a42506;
                }
                if (local_b8 != 0) {
                  FUN_00d50b00();
                }
                bVar1 = true;
                if ((bVar11) && (lVar9 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              lVar3 = local_b8;
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              lVar8 = lVar9;
              if (lVar9 != lVar3) break;
            }
LAB_01a42506:
            bVar11 = bVar1;
            lVar9 = lVar8;
          }
          FUN_001159b0();
          uVar12 = FUN_00d50b20();
          if ((bVar11) && (lVar9 != 0)) {
            uVar12 = FUN_00d50b20();
          }
          lVar9 = local_c8;
          if (iVar10 < iVar7) break;
        }
        iVar7 = local_70._4_4_;
      }
      FUN_00115190();
      iVar7 = 0;
LAB_01a42bb5:
      if (local_98 != 0) goto LAB_01a42bc1;
    }
  }
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 == 0) {
    return iVar7;
  }
LAB_01a42bdc:
  FUN_00d50b20();
  return iVar7;
}


