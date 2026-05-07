// Function: FUN_00cb45c0
// Address: 00cb45c0
// Size: 2313 bytes
// Class: GNOverloudTapedesk


void FUN_00cb45c0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  bool *pbVar4;
  longlong lVar5;
  void *pvVar6;
  longlong **pplVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar9;
  longlong local_180;
  char local_178;
  longlong *local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
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
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong *local_68;
  bool local_60 [8];
  longlong local_58;
  undefined8 local_50;
  int local_48;
  bool local_38 [8];
  
  cVar2 = (**(code **)(*(longlong *)*param_2 + 0x370))();
  if (cVar2 != '\0') {
    local_168 = *unaff_RSI;
    local_160 = '\0';
    local_158 = *param_2;
    local_150 = '\0';
    cVar2 = (**(code **)(*unaff_RDI + 0x408))();
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      cVar2 = FUN_00d77de0();
      if (cVar2 == '\0') {
        (**(code **)(*(longlong *)*unaff_RSI + 0x210))();
        plVar3 = local_68;
        if (local_60[0] == false) {
          if (local_68 == (longlong *)0x0) goto LAB_00cb4886;
          FUN_00d50b00();
          if ((local_60[0] != false) && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_68 == (longlong *)0x0) goto LAB_00cb4886;
        local_138 = plVar3;
        local_130 = '\0';
        cVar2 = (**(code **)(*unaff_RDI + 0x3b0))();
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar2 != '\0') &&
           ((cVar2 = (**(code **)(*plVar3 + 0x2c0))(), cVar2 == '\0' ||
            (iVar8 = (**(code **)(*plVar3 + 0x2c8))(), iVar8 == 0)))) {
          local_128 = plVar3;
          local_120 = '\0';
          (**(code **)(*unaff_RDI + 0x3e0))();
          if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      else {
        (**(code **)(*(longlong *)*unaff_RSI + 0x210))();
        plVar3 = local_68;
        if ((((local_60[0] == false) && (local_68 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_60[0] != false)) && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_148 = plVar3;
        local_140 = '\0';
        FUN_00cb53b0(0,1);
        plVar1 = local_90;
        if (local_88 == '\0') {
          if (local_90 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_68 = plVar1;
        local_60[0] = false;
        FUN_00d21140();
        if ((local_60[0] != false) && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
LAB_00cb4886:
  cVar2 = FUN_00d74560();
  if (cVar2 == '\0') {
    local_118 = *unaff_RSI;
    local_110 = '\0';
    (**(code **)(*unaff_RDI + 0x458))();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((((unaff_RDI[0x12] != 0) && ((char)unaff_RDI[0x1c] != '\0')) && ((int)unaff_RDI[0x1a] == 0))
     && (((plVar3 = (longlong *)(**(code **)(*(longlong *)*unaff_RSI + 0x188))(),
          plVar3 != (longlong *)0x0 && (*plVar3 != 0)) &&
         (cVar2 = (**(code **)(*(longlong *)*param_2 + 0x370))(), cVar2 != '\0')))) {
    local_108 = *param_2;
    local_100 = '\0';
    cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x2b8))();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)*unaff_RSI + 0x210))();
      plVar1 = local_68;
      local_170 = local_68;
      if (local_60[0] == false) {
        pbVar4 = local_38;
      }
      else {
        pbVar4 = local_60;
      }
      local_38[0] = local_60[0] != false;
      *pbVar4 = false;
      if ((local_60[0] != false) && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          local_a8 = plVar1;
          local_60[0] = false;
          local_68 = (longlong *)0x0;
          local_50 = 0xffffffff;
          local_48 = 0;
          local_50._4_4_ = 0;
          local_58 = *plVar3;
          while( true ) {
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar8 = -local_50._4_4_;
              }
              else {
                iVar8 = (int)local_50 - local_50._4_4_;
                local_50 = CONCAT44(local_50._4_4_,iVar8);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar8 = 0;
              }
              local_50 = CONCAT44(iVar8,(int)local_50);
            }
            lVar5 = (longlong)(int)local_50;
            iVar8 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar8);
            if (*(int *)(local_58 + 0xc) <= iVar8) break;
            local_68 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar5 * 8);
            FUN_00e17bc0();
            if (local_90 == (longlong *)0x0) {
              bVar9 = true;
            }
            else {
              FUN_00e17bc0();
              if (local_a0 == (longlong *)0x0) {
                bVar9 = false;
              }
              else {
                FUN_00e17bc0();
                bVar9 = local_180 == *param_2;
                if ((local_178 != '\0') && (local_180 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar9) {
              cVar2 = FUN_00d77de0();
              if (cVar2 == '\0') {
                FUN_00e8b690();
                (**(code **)(*local_a8 + 0x360))();
                cVar2 = FUN_00e85ea0();
                pplVar7 = &local_170;
                if (cVar2 == '\0') {
                  pplVar7 = (longlong **)&DAT_02802688;
                }
                if (*pplVar7 != (longlong *)0x0) {
                  pvVar6 = _pthread_getspecific((pthread_key_t)pplVar7);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_00e17ba0();
                  local_e8 = 0;
                  local_e0 = '\0';
                  FUN_00e8c420();
                  if ((local_e0 != '\0') && (local_e8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                    (**(code **)(*local_90 + 0x10))();
                    FUN_00d50b20();
                  }
                }
              }
              else {
                local_88 = '\0';
                local_90 = (longlong *)0x0;
                local_80 = local_a8;
                local_78 = 0xffffffff;
                local_70 = 0;
                local_78._4_4_ = 0;
                while( true ) {
                  if (local_78._4_4_ != 0) {
                    if (local_78._4_4_ < 1) {
                      iVar8 = -local_78._4_4_;
                    }
                    else {
                      iVar8 = (int)local_78 - local_78._4_4_;
                      local_78 = CONCAT44(local_78._4_4_,iVar8);
                      FUN_00d23690();
                      local_70 = local_70 + local_78._4_4_;
                      iVar8 = 0;
                    }
                    local_78 = CONCAT44(iVar8,(int)local_78);
                  }
                  lVar5 = (longlong)(int)local_78;
                  iVar8 = (int)local_78 + 1;
                  local_78 = CONCAT44(local_78._4_4_,iVar8);
                  if (*(int *)((longlong)local_80 + 0xc) <= iVar8) break;
                  plVar3 = *(longlong **)(local_80[2] + 8 + lVar5 * 8);
                  local_a0 = plVar3;
                  local_90 = plVar3;
                  FUN_00e8b690();
                  pplVar7 = (longlong **)&DAT_02802688;
                  if (plVar3 != (longlong *)0x0) {
                    (**(code **)(*plVar3 + 0x360))();
                    cVar2 = FUN_00e85ea0();
                    pplVar7 = &local_a0;
                    if (cVar2 == '\0') {
                      pplVar7 = (longlong **)&DAT_02802688;
                    }
                  }
                  if (*pplVar7 != (longlong *)0x0) {
                    pvVar6 = _pthread_getspecific((pthread_key_t)pplVar7);
                    if (pvVar6 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_00e17ba0();
                    local_f8 = 0;
                    local_f0 = '\0';
                    FUN_00e8c420();
                    if ((local_f0 != '\0') && (local_f8 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                      (**(code **)(*local_a0 + 0x10))();
                      FUN_00d50b20();
                    }
                  }
                }
                FUN_00e8cae0();
              }
            }
          }
          FUN_00cc12b0();
        }
        if (local_38[0] != false) {
          FUN_00d50b20();
        }
      }
    }
  }
  if ((((*(char *)((longlong)unaff_RDI + 0xe1) != '\0') && (unaff_RDI[8] != 0)) &&
      (cVar2 = FUN_00db3680(), cVar2 == '\0')) && (cVar2 = FUN_00d74560(), cVar2 == '\0')) {
    local_d8 = *param_2;
    local_d0 = '\0';
    cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x350))();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      local_c8 = *unaff_RSI;
      local_c0 = '\0';
      local_b8 = *param_2;
      local_b0 = '\0';
      FUN_00db2960();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


