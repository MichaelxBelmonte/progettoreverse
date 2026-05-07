// Function: FUN_0123b3d0
// Address: 0123b3d0
// Size: 1658 bytes
// Class: MUAudioEffectRenderProcessorIdentifier


/* WARNING: Removing unreachable block (ram,0x0123b8ad) */
/* WARNING: Removing unreachable block (ram,0x0123b8bd) */
/* WARNING: Removing unreachable block (ram,0x0123b813) */
/* WARNING: Removing unreachable block (ram,0x0123b81f) */

void FUN_0123b3d0(longlong *param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong *local_a8;
  char local_a0;
  undefined4 local_94;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  float local_70;
  float local_6c;
  longlong local_68;
  char local_60;
  ulonglong local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  char local_38;
  
  local_94 = param_4;
  cVar3 = FUN_0124d450();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*unaff_RDI + 0x498))();
    if (cVar3 == '\0') {
      if ((*unaff_RSI != 0) && (FUN_0123b2a0(), lVar5 = local_68, local_68 != 0)) {
        if (local_60 == '\0') {
          FUN_00d50b00();
        }
        if (unaff_RDI[0xd] != lVar5) {
          FUN_00d64850();
          lVar9 = unaff_RDI[0xd];
          if (lVar9 != lVar5) {
            FUN_00d50b00();
            unaff_RDI[0xd] = lVar5;
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
        (**(code **)(*unaff_RDI + 0x478))();
        local_80 = local_40;
        local_78 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_78 = '\x01';
        FUN_00b810f0();
        lVar5 = local_68;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_0123b010();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x478))();
      local_90 = local_40;
      local_88 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_88 = '\x01';
      FUN_00b810f0();
      lVar5 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_0123b010();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  cVar3 = FUN_0124d450();
  if (((cVar3 != '\0') && (param_3 != '\0')) && (local_58 = unaff_RDI[7], local_58 != 0)) {
    local_60 = 0;
    local_68 = 0;
    local_50._0_4_ = -1;
    local_50._4_4_ = 0;
    local_48 = 0;
    iVar11 = 0;
    while( true ) {
      lVar5 = (longlong)(int)local_50;
      local_50._0_4_ = (int)local_50 + 1;
      if (*(int *)(local_58 + 0xc) <= (int)local_50) break;
      local_68 = *(undefined8 *)(*(longlong *)(local_58 + 0x10) + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_58 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar4 = FUN_01397570();
      iVar11 = iVar11 + (uint)bVar4;
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 0) {
          local_50._4_4_ = -local_50._4_4_;
        }
        else {
          local_50._0_4_ = (int)local_50 - local_50._4_4_;
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          local_50._4_4_ = 0;
        }
      }
    }
    FUN_00115190();
    if (iVar11 == 0) {
      local_6c = 0.0;
      lVar5 = unaff_RDI[7];
    }
    else {
      local_6c = DAT_02390124 / (float)iVar11;
      lVar5 = unaff_RDI[7];
    }
    if (lVar5 != 0) {
      local_60 = 0;
      local_68 = 0;
      local_48 = 0;
      local_50 = 0;
      uVar2 = lVar5;
      if (0 < *(int *)(lVar5 + 0xc)) {
        local_70 = 0.0;
        lVar9 = 0;
        uVar8 = local_58;
        local_58 = lVar5;
        do {
          local_68 = *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + lVar9 * 8);
          pVar7 = (pthread_key_t)uVar8;
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01397570();
          if ((cVar3 == '\0') || (*param_1 == 0)) {
            plVar10 = (longlong *)0x0;
            bVar1 = false;
          }
          else {
            FUN_00df4f00(local_70,local_6c + local_70);
            plVar10 = (longlong *)(local_40 + 0x10);
            if (local_40 == 0) {
              bVar1 = false;
              plVar10 = (longlong *)0x0;
            }
            else if (local_38 == '\0') {
              (**(code **)(*plVar10 + 0x10))();
              FUN_00d50b00();
              bVar1 = true;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
              bVar1 = true;
            }
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_a0 = '\0';
          uVar8 = (ulonglong)(byte)local_94;
          local_a8 = plVar10;
          FUN_01397bb0(uVar8,&local_a8);
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            (**(code **)(*local_a8 + 0x10))();
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            local_70 = local_70 + local_6c;
          }
          if ((bVar1) && (plVar10 != (longlong *)0x0)) {
            (**(code **)(*plVar10 + 0x10))();
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar9);
          uVar2 = local_58;
        } while ((int)lVar9 < *(int *)(lVar5 + 0xc));
      }
      local_58 = uVar2;
      FUN_00115190();
    }
  }
  return;
}


