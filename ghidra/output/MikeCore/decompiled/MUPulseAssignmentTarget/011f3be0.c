// Function: FUN_011f3be0
// Address: 011f3be0
// Size: 3313 bytes
// Class: MUPulseAssignmentTarget
// String references:
//   "MUPulseAssignmentTarget"


/* WARNING: Removing unreachable block (ram,0x011f3cc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_011f3be0(undefined8 param_1,longlong *param_2,pthread_key_t param_3,undefined8 param_4
                      )

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int extraout_var;
  int extraout_var_00;
  void *pvVar9;
  uint in_ECX;
  uint uVar10;
  pthread_key_t pVar11;
  undefined8 unaff_RBX;
  longlong lVar12;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 local_res8;
  byte local_res10;
  undefined8 local_138;
  undefined1 local_130;
  longlong *local_128;
  undefined1 local_120;
  longlong *local_118;
  longlong *local_110;
  uint local_104;
  undefined8 local_100;
  ulonglong local_f8;
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
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  char local_80;
  uint local_78;
  pthread_key_t local_74;
  longlong *local_58;
  ulonglong local_50;
  undefined8 *local_48;
  ulonglong local_40;
  char local_38 [8];
  
  if (*(int *)(*unaff_RSI + 0xc) == 0) {
    uVar14 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    goto LAB_011f48b9;
  }
  local_a0 = param_1;
  local_98 = param_4;
  local_74 = param_3;
  if (*param_2 != 0) {
    FUN_00d23340();
    local_40 = CONCAT71(local_40._1_7_,(char)local_50);
    puVar6 = &local_40;
    if ((char)local_50 != '\0') {
      puVar6 = &local_50;
    }
    *(undefined1 *)puVar6 = 0;
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23340();
    puVar6 = &local_50;
    if ((char)local_50 == '\0') {
      puVar6 = (ulonglong *)local_38;
    }
    local_38[0] = (char)local_50;
    *(undefined1 *)puVar6 = 0;
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar16 = FUN_00d23340();
  puVar6 = &local_40;
  if ((char)local_50 != '\0') {
    puVar6 = &local_50;
  }
  local_40 = CONCAT71(local_40._1_7_,(char)local_50);
  *(undefined1 *)puVar6 = 0;
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((DAT_0272fca8 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Qa_01, iVar5 != 0)) {
    _DAT_027902e0 = "MUPulseAssignmentTarget";
    DAT_027902f0 = 0;
    _DAT_027902e8 = 0;
    uVar16 = ___cxa_guard_release();
  }
  if (local_58 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    local_90 = 0;
  }
  else {
    uVar16 = (**(code **)(*local_58 + 0x360))();
    lVar8 = FUN_00e86120(uVar16,1);
    plVar13 = (longlong *)(lVar8 + (longlong)local_58);
    (**(code **)(*(longlong *)((longlong)local_58 + lVar8) + 0x10))();
    uVar16 = FUN_00d50b00();
    local_90 = CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
    uVar16 = extraout_XMM0_Qa;
    if ((char)local_40 != '\0') {
      uVar16 = FUN_00d50b20();
    }
  }
  FUN_00d242c0(uVar16,0);
  local_104 = (uint)local_res10;
  local_78 = in_ECX & 0xff;
  pVar11 = local_74;
  FUN_011f4f10(local_a0,local_78,local_98,local_res8,*unaff_RSI,0);
  if (*param_2 == 0) {
LAB_011f45a9:
    if (local_74 != 0xffffffff) {
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = FUN_016ca710();
      unaff_RSI = (longlong *)*unaff_RDI;
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        unaff_RSI = (longlong *)*unaff_RDI;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          unaff_RSI = (longlong *)unaff_RSI[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
      }
      local_98 = FUN_016ca6f0();
    }
    lVar8 = *param_2;
    uVar14 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (0 < *(int *)(lVar8 + 0xc)) {
      lVar12 = 0;
      local_118 = param_2;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0x10) + lVar12 * 8);
        if ((DAT_0272fca8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          _DAT_027902e0 = "MUPulseAssignmentTarget";
          DAT_027902f0 = 0;
          _DAT_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (longlong *)0x0) {
          lVar8 = 0;
        }
        else {
          uVar16 = (**(code **)(*plVar1 + 0x360))();
          lVar8 = FUN_00e86120(uVar16,1);
        }
        plVar15 = (longlong *)(lVar8 + (longlong)plVar1);
        local_40 = local_40 & 0xffffffffffffff00;
        local_138 = *unaff_RDI;
        local_130 = 0;
        local_120 = 0;
        local_128 = plVar15;
        FUN_011f64f0(local_a0,local_78,local_res8);
        if (lVar12 < (longlong)*(int *)(*param_2 + 0xc) + -1) {
          plVar2 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + 8 + lVar12 * 8);
          if ((DAT_0272fca8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            _DAT_027902e0 = "MUPulseAssignmentTarget";
            DAT_027902f0 = 0;
            _DAT_027902e8 = 0;
            ___cxa_guard_release();
          }
          if (plVar2 == (longlong *)0x0) {
            lVar8 = 0;
          }
          else {
            uVar16 = (**(code **)(*plVar2 + 0x360))();
            lVar8 = FUN_00e86120(uVar16,1);
          }
          local_100 = (**(code **)(*(longlong *)((longlong)plVar2 + lVar8) + 0x38))();
          uVar14 = (**(code **)(*plVar15 + 0x48))();
          param_2 = local_118;
          if (((uVar14 >> 0x20 != 0) && (local_100._4_4_ != 0)) &&
             (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
            (**(code **)(*plVar15 + 0x50))();
          }
        }
        if (((char)local_40 != '\0') && (plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar15 + 0x10))();
          FUN_00d50b20();
        }
        lVar12 = lVar12 + 1;
        lVar8 = *param_2;
      } while (lVar12 < *(int *)(lVar8 + 0xc));
      uVar14 = CONCAT71((int7)((ulonglong)&local_138 >> 8),1);
    }
  }
  else {
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_02572358;
    uVar16 = (*DAT_02572370)();
    FUN_00d242c0(uVar16,0);
    local_f0 = **(longlong **)(*unaff_RSI + 0x10);
    local_e8 = 0;
    if (local_f0 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    uVar4 = FUN_00d237a0();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (uVar4 == 0xffffffff) {
      FUN_00d50b20();
    }
    else {
      FUN_00d216c0();
      local_110 = (longlong *)(ulonglong)uVar4;
      local_48 = puVar7;
      if (0 < (int)uVar4) {
        uVar14 = 0;
        do {
          lVar8 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + uVar14 * 8);
          local_d8 = 0;
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          local_d8 = '\x01';
          local_e0 = lVar8;
          FUN_00d21140();
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          uVar14 = uVar14 + 1;
        } while (uVar4 != uVar14);
      }
      puVar7 = local_48;
      cVar3 = FUN_011f6270();
      if (cVar3 == '\0') {
        if (puVar7 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d23340();
        puVar6 = &local_40;
        if ((char)local_50 != '\0') {
          puVar6 = &local_50;
        }
        local_40 = CONCAT71(local_40._1_7_,(char)local_50);
        *(undefined1 *)puVar6 = 0;
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_80 = 0;
        if (((char)local_40 == '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        local_88 = local_58;
        local_80 = '\x01';
        uVar4 = FUN_00d237a0();
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar4 == 0xffffffff) {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d216c0();
          uVar10 = uVar4 + 1;
          uVar14 = (ulonglong)uVar10;
          lVar8 = *param_2;
          local_f8 = (ulonglong)uVar4;
          if ((int)uVar10 < *(int *)(lVar8 + 0xc)) {
            lVar12 = (longlong)(int)uVar10;
            do {
              lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar12 * 8);
              local_c8 = 0;
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              local_c8 = '\x01';
              local_d0 = lVar8;
              FUN_00d21140();
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
              lVar12 = lVar12 + 1;
              lVar8 = *param_2;
              uVar14 = (ulonglong)*(int *)(lVar8 + 0xc);
            } while (lVar12 < (longlong)uVar14);
          }
          cVar3 = FUN_011f6270();
          unaff_RSI = local_110;
          if (cVar3 != '\0') {
            while( true ) {
              pVar11 = (pthread_key_t)uVar14;
              cVar3 = FUN_011f6270();
              if (cVar3 != '\0') break;
              if (0 < (int)unaff_RSI) {
                plVar1 = *(longlong **)
                          (*(longlong *)(*param_2 + 0x10) + ((ulonglong)unaff_RSI & 0xffffffff) * 8)
                ;
                if ((DAT_0272fca8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
                  _DAT_027902e0 = "MUPulseAssignmentTarget";
                  DAT_027902f0 = 0;
                  _DAT_027902e8 = 0;
                  ___cxa_guard_release();
                }
                if (plVar1 == (longlong *)0x0) {
                  lVar8 = 0;
                }
                else {
                  uVar16 = (**(code **)(*plVar1 + 0x360))();
                  lVar8 = FUN_00e86120(uVar16,1);
                }
                (**(code **)(*(longlong *)((longlong)plVar1 + lVar8) + 0x38))();
                plVar15 = (longlong *)(ulonglong)((int)unaff_RSI - 1);
                plVar1 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + (longlong)plVar15 * 8);
                if ((DAT_0272fca8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
                  _DAT_027902e0 = "MUPulseAssignmentTarget";
                  DAT_027902f0 = 0;
                  _DAT_027902e8 = 0;
                  ___cxa_guard_release();
                }
                if (plVar1 == (longlong *)0x0) {
                  lVar8 = 0;
                }
                else {
                  uVar16 = (**(code **)(*plVar1 + 0x360))();
                  lVar8 = FUN_00e86120(uVar16,1);
                }
                local_40 = (**(code **)(*(longlong *)((longlong)plVar1 + lVar8) + 0x38))();
                if (((extraout_var != 0) && (local_40 >> 0x20 != 0)) &&
                   (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
                  lVar8 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + (longlong)plVar15 * 8);
                  local_b8 = 0;
                  uVar16 = extraout_XMM0_Qa_00;
                  if (lVar8 != 0) {
                    uVar16 = FUN_00d50b00();
                  }
                  local_b8 = '\x01';
                  local_c0 = lVar8;
                  FUN_00d23370(uVar16,0);
                  unaff_RSI = plVar15;
                  if ((local_b8 != '\0') && (local_c0 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              if ((int)local_f8 < *(int *)(*param_2 + 0xc) + -1) {
                lVar8 = (longlong)(int)local_f8;
                plVar1 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + lVar8 * 8);
                if ((DAT_0272fca8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
                  _DAT_027902e0 = "MUPulseAssignmentTarget";
                  DAT_027902f0 = 0;
                  _DAT_027902e8 = 0;
                  ___cxa_guard_release();
                }
                if (plVar1 == (longlong *)0x0) {
                  lVar12 = 0;
                }
                else {
                  uVar16 = (**(code **)(*plVar1 + 0x360))();
                  lVar12 = FUN_00e86120(uVar16,1);
                }
                (**(code **)(*(longlong *)((longlong)plVar1 + lVar12) + 0x38))();
                plVar1 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + 8 + lVar8 * 8);
                if ((DAT_0272fca8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
                  _DAT_027902e0 = "MUPulseAssignmentTarget";
                  DAT_027902f0 = 0;
                  _DAT_027902e8 = 0;
                  ___cxa_guard_release();
                }
                if (plVar1 == (longlong *)0x0) {
                  lVar12 = 0;
                }
                else {
                  uVar16 = (**(code **)(*plVar1 + 0x360))();
                  lVar12 = FUN_00e86120(uVar16,1);
                }
                local_40 = (**(code **)(*(longlong *)((longlong)plVar1 + lVar12) + 0x38))();
                if (((extraout_var_00 != 0) && (local_40 >> 0x20 != 0)) &&
                   (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
                  lVar8 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + (lVar8 + 1) * 8);
                  local_a8 = 0;
                  if (lVar8 != 0) {
                    FUN_00d50b00();
                  }
                  local_a8 = '\x01';
                  local_b0 = lVar8;
                  FUN_00d21140();
                  local_f8 = (ulonglong)((int)local_f8 + 1);
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              uVar14 = (ulonglong)local_74;
              FUN_011f4f10(local_a0,local_78,local_98,local_res8);
            }
            if (local_48 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_011f45a9;
          }
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
      }
    }
    uVar14 = 0;
  }
  if (((char)local_90 != '\0') && (plVar13 != (longlong *)0x0)) {
    (**(code **)(*plVar13 + 0x10))();
    FUN_00d50b20();
  }
LAB_011f48b9:
  return uVar14 & 0xffffffff;
}


