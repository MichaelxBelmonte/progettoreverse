// Function: FUN_00e69550
// Address: 00e69550
// Size: 2654 bytes
// Class: GNString
// String references:
//   "%@%@"


/* WARNING: Removing unreachable block (ram,0x00e698b8) */
/* WARNING: Removing unreachable block (ram,0x00e698c4) */
/* WARNING: Removing unreachable block (ram,0x00e6978c) */
/* WARNING: Removing unreachable block (ram,0x00e69791) */

undefined8 * FUN_00e69550(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined7 uVar7;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *in_RCX;
  longlong **pplVar8;
  longlong *plVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *unaff_R13;
  undefined8 uVar10;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  ulonglong local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_180 = param_1;
  local_178 = param_3;
  local_118 = param_2;
  if (*in_RCX == 0) goto LAB_00e6973c;
  FUN_00c9fe20();
  pplVar8 = &local_68;
  if ((char)local_98 != '\0') {
    pplVar8 = &local_98;
  }
  local_68 = (longlong *)CONCAT71(local_68._1_7_,(char)local_98);
  *(undefined1 *)pplVar8 = 0;
  if (((char)local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  iVar2 = *(int *)((longlong)local_a0 + 0xc);
  if (((char)local_68 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  unaff_R13 = param_2;
  if (iVar2 == 0) goto LAB_00e6973c;
  local_f8 = *(longlong *)(unaff_RSI + 0x10);
  local_188 = *param_2;
  FUN_00083ea0(2,&local_188);
  FUN_00d8cb40();
  plVar6 = local_68;
  plVar9 = (longlong *)*param_2;
  if (plVar9 == local_68) {
    if (((char)param_2[1] == '\0') && (local_68 != (longlong *)0x0)) {
      if (local_60 != '\0') goto LAB_00e6969e;
      FUN_00d50b00();
      goto LAB_00e696dc;
    }
LAB_00e696e1:
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar1 = (char)param_2[1];
    unaff_R13 = (longlong *)CONCAT71((int7)((ulonglong)param_2 >> 8),cVar1);
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *local_118 = (longlong)plVar6;
      if ((cVar1 != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00e696dc:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_00e696e1;
    }
    *param_2 = (longlong)local_68;
    if ((cVar1 != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_00e6969e:
    *(undefined1 *)(param_2 + 1) = 1;
    local_60 = '\0';
  }
  local_a0 = (undefined8 *)&DAT_0253d630;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = &DAT_024c5048;
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00e6973c:
  local_98._0_1_ = '\0';
  local_a0 = (undefined8 *)0x0;
  FUN_00da5ad0();
  local_88 = local_60 != '\0';
  local_90 = local_68;
  if ((bool)local_88) {
    local_60 = '\0';
  }
  local_80 = FUN_00da7170();
  FUN_00da7180();
  if (local_90 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    local_70 = 0;
    local_48 = 0;
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)0x0;
    local_38 = (longlong *)((ulonglong)local_38._4_4_ << 0x20);
    local_70 = 0;
    uVar5 = 0;
    do {
      local_100 = 0;
      lVar3 = *(longlong *)(unaff_RSI + 0x18);
      local_a8 = uVar5;
      local_40 = plVar9;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_100 = '\x01';
      local_158 = (longlong *)0x0;
      local_150 = '\0';
      local_108 = lVar3;
      FUN_00de88e0(&local_158,&local_108);
      plVar9 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
        (**(code **)(*local_158 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e94a20();
      FUN_00e92260(local_180);
      if (*local_178 != 0) {
        local_148 = (longlong *)(*local_178 + 0x10);
        local_140 = '\0';
        FUN_00e92280();
        if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
          (**(code **)(*local_148 + 0x10))();
          FUN_00d50b20();
        }
      }
      if (*in_RCX != 0) {
        local_60 = '\0';
        local_68 = (longlong *)0x0;
        local_58 = *(longlong *)(*in_RCX + 0x10);
        local_50 = 0;
        if (0 < *(int *)(local_58 + 0xc)) {
          do {
            local_68 = *(longlong **)(*(longlong *)(local_58 + 0x10) + (longlong)local_50 * 8);
            uVar10 = FUN_00e6fcd0((longlong)local_50,&local_68);
            lVar3 = local_f8;
            local_e0 = 0;
            if (local_f0 == '\0') {
              if (local_f8 != 0) {
                uVar10 = FUN_00d50b00();
              }
            }
            else {
              local_f0 = '\0';
            }
            local_e0 = '\x01';
            local_e8 = lVar3;
            local_138 = local_68;
            local_130 = '\0';
            FUN_00de8b00(uVar10,&local_138);
            if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_e0 != '\0') && (local_e8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            local_50 = local_50 + 1;
          } while (local_50 < *(int *)(local_58 + 0xc));
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(*plVar9 + 0x398))(0,0);
      FUN_00e925a0();
      plVar6 = local_40;
      plVar9 = local_68;
      uVar7 = (undefined7)((ulonglong)local_68 >> 8);
      if (local_40 == local_68) {
        plVar9 = plVar6;
        if (((char)local_38 == '\0') && (local_40 != (longlong *)0x0)) {
          uVar5 = CONCAT71(uVar7,1);
          local_48 = uVar5;
          if (local_60 != '\0') goto LAB_00e69bd4;
          local_48 = CONCAT71(uVar7,1);
          local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
          uVar5 = FUN_00d50b00();
        }
        else {
          local_48 = (ulonglong)local_38 & 0xffffffff;
          uVar5 = local_48;
        }
joined_r0x00e69b99:
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
      }
      else {
        if (local_60 == '\0') {
          uVar10 = 0;
          if (local_68 != (longlong *)0x0) {
            uVar10 = FUN_00d50b00();
          }
          local_48 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
          uVar5 = local_48;
          if (((char)local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
            uVar5 = FUN_00d50b20();
          }
          goto joined_r0x00e69b99;
        }
        uVar5 = CONCAT71(uVar7,1);
        local_48 = uVar5;
        if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
      }
LAB_00e69bd4:
      puVar4 = local_a0;
      if (local_a0 == (undefined8 *)0x0) {
LAB_00e69c57:
        plVar6 = (longlong *)(local_a8 & 0xffffffff);
      }
      else {
        plVar6 = (longlong *)CONCAT71((int7)(uVar5 >> 8),(char)local_98);
        if (local_a0 == (undefined8 *)local_70) {
          if (((char)local_98 == '\0') || ((char)local_a8 != '\0')) goto LAB_00e69c57;
          plVar6 = (longlong *)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
          FUN_00d50b00();
        }
        else {
          if ((char)local_98 != '\0') {
            local_38 = (longlong *)CONCAT44(local_38._4_4_,(int)local_48);
            local_40 = plVar9;
            FUN_00d50b00();
          }
          if (((char)local_a8 == '\0') || (local_70 == 0)) {
            local_70 = (longlong)puVar4;
          }
          else {
            FUN_00d50b20();
            local_70 = (longlong)puVar4;
          }
        }
      }
      FUN_00d50b20();
      FUN_00da7180();
      if (local_90 == (longlong *)0x0) break;
      local_90 = (longlong *)0x0;
      if (local_88 == '\0') {
        local_88 = '\0';
        break;
      }
      FUN_00d50b20();
      local_88 = '\0';
      local_38 = (longlong *)CONCAT44(local_38._4_4_,(int)local_48);
      uVar5 = (ulonglong)plVar6 & 0xffffffff;
      unaff_R13 = plVar6;
    } while (local_90 != (longlong *)0x0);
  }
  local_40 = plVar6;
  local_38 = plVar9;
  if (((char)local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = local_38;
  lVar3 = local_70;
  plVar9 = local_118;
  if (local_70 != 0) {
    FUN_00e97f30();
    local_d8 = local_68;
    local_d0 = 0;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_d0 = '\x01';
    FUN_006e17f0();
    puVar4 = local_a0;
    if ((char)local_98 == '\0') {
      if (((local_a0 != (undefined8 *)0x0) && (FUN_00d50b00(), (char)local_98 != '\0')) &&
         (local_a0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_98._0_1_ = '\0';
    }
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = (undefined8 *)*plVar9;
    local_98._0_1_ = '\0';
    FUN_00d21140();
    if (((char)local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_128 = (longlong)puVar4;
    local_120 = '\0';
    uVar10 = FUN_00d92220();
    local_b8 = local_68;
    local_b0 = 0;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_b0 = '\x01';
    FUN_00d95130(uVar10,&local_b8);
    local_c8 = (longlong)local_a0;
    local_c0 = 0;
    if ((char)local_98 == '\0') {
      if (local_a0 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98._0_1_ = '\0';
    }
    local_c0 = '\x01';
    FUN_00e97f60();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e971f0();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (((char)local_48 == '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)local_40 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


