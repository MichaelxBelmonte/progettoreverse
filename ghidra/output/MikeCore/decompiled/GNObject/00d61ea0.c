// Function: FUN_00d61ea0
// Address: 00d61ea0
// Size: 2607 bytes
// Class: GNObject


/* WARNING: Removing unreachable block (ram,0x00d628cb) */
/* WARNING: Removing unreachable block (ram,0x00d628db) */
/* WARNING: Removing unreachable block (ram,0x00d61fdb) */
/* WARNING: Removing unreachable block (ram,0x00d61fe4) */

void FUN_00d61ea0(undefined4 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_208;
  char local_200;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined1 local_51;
  longlong local_40;
  undefined4 uStack_38;
  
  local_1e0 = *unaff_RSI;
  local_1d8 = '\0';
  uVar7 = (**(code **)(*unaff_RDI + 600))(param_1,&local_1e0);
  if ((local_200 == '\0') && (local_208 != 0)) {
    FUN_00e31530(uVar7,0);
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  local_51 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
  if (local_208 != 0) {
    if (0 < *(int *)(local_208 + 0xc)) {
      lVar6 = 0;
      do {
        lVar2 = local_40;
        plVar1 = *(longlong **)(*(longlong *)(local_208 + 0x10) + lVar6 * 8);
        uVar7 = FUN_00d74120();
        if (((char)uStack_38 == '\0') && (local_40 != 0)) {
          FUN_00e31530(uVar7,0);
        }
        local_1d0 = local_40;
        local_1c8 = '\0';
        cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x590))();
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*plVar1 + 0x368))();
          if (cVar3 == '\0') {
            local_b0 = local_40;
            local_a8 = '\0';
            uVar7 = (**(code **)(*(longlong *)*unaff_RSI + 0x578))(extraout_XMM0_Da,&local_b0);
            local_60 = 0;
            if ((char)uStack_38 == '\0') {
              if (local_40 != 0) {
                FUN_00e31530(uVar7,0);
              }
            }
            else {
              uStack_38 = 0;
            }
            local_60 = '\x01';
            local_a0 = local_40;
            local_98 = '\0';
            local_68 = local_a0;
            (**(code **)(*unaff_RDI + 0x1f0))(local_51,&local_a0,0);
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if (((char)uStack_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
            if (cVar3 == '\0') {
              local_d0 = local_40;
              local_c8 = '\0';
              uVar7 = (**(code **)(*(longlong *)*unaff_RSI + 0x578))(extraout_XMM0_Da_00,&local_d0);
              local_70 = 0;
              if ((char)uStack_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00e31530(uVar7,0);
                }
              }
              else {
                uStack_38 = 0;
              }
              local_70 = '\x01';
              local_c0 = local_40;
              local_b8 = '\0';
              local_78 = local_c0;
              (**(code **)(*unaff_RDI + 0x1f0))(0);
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if (((char)uStack_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              uVar7 = local_40._4_4_;
              switch(*(undefined1 *)(plVar1[0xc] + 0x19)) {
              case 0x43:
                local_140 = local_40;
                local_138 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x568))();
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              default:
                local_f0 = local_40;
                local_e8 = '\0';
                uVar7 = (**(code **)(*(longlong *)*unaff_RSI + 0x578))
                                  (extraout_XMM0_Da_00,&local_f0);
                local_80 = 0;
                if ((char)uStack_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00e31530(uVar7,0);
                  }
                }
                else {
                  uStack_38 = 0;
                }
                local_80 = '\x01';
                local_e0 = local_40;
                local_d8 = '\0';
                local_88 = local_e0;
                (**(code **)(*unaff_RDI + 0x1f0))();
                if ((local_d8 != '\0') && (local_e0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_80 != '\0') && (local_88 != 0)) {
                  FUN_00d50b20();
                }
                if (((char)uStack_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_e8 != '\0') && (local_f0 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 0x45:
                local_150 = local_40;
                local_148 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x550))();
                uStack_38 = (undefined4)param_2;
                if ((local_148 != '\0') && (local_150 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x49:
                local_1b0 = local_40;
                local_1a8 = '\0';
                uVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x520))();
                if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT44(uVar7,uVar5);
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x50:
                local_180 = local_40;
                local_178 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x560))();
                if ((local_178 != '\0') && (local_180 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x52:
                local_160 = local_40;
                local_158 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x548))();
                uStack_38 = (undefined4)param_2;
                if ((local_158 != '\0') && (local_160 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x53:
                local_170 = local_40;
                local_168 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x558))();
                if ((local_168 != '\0') && (local_170 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x62:
                local_130 = local_40;
                local_128 = '\0';
                uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x510))();
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT71(local_40._1_7_,uVar4);
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 99:
                local_1c0 = local_40;
                local_1b8 = '\0';
                uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x518))();
                if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT71(local_40._1_7_,uVar4);
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 100:
                local_190 = local_40;
                local_188 = '\0';
                local_90 = (**(code **)(*(longlong *)*unaff_RSI + 0x540))();
                if ((local_188 != '\0') && (local_190 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = local_90;
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x65:
              case 0x69:
                local_120 = local_40;
                local_118 = '\0';
                uVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x528))();
                if ((local_118 != '\0') && (local_120 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT44(uVar7,uVar5);
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x66:
                local_1a0 = local_40;
                local_198 = '\0';
                uVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x538))();
                local_90 = CONCAT44(local_90._4_4_,uVar5);
                if ((local_198 != '\0') && (local_1a0 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT44(uVar7,(undefined4)local_90);
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x6c:
                local_110 = local_40;
                local_108 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x530))();
                if ((local_108 != '\0') && (local_110 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x71:
                local_100 = local_40;
                local_f8 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x570))();
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
              }
            }
          }
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_208 + 0xc));
    }
    FUN_00d74c70();
    FUN_00d50b20();
  }
  return;
}


