// Function: FUN_00cb58e0
// Address: 00cb58e0
// Size: 3598 bytes
// Class: Unknown
// String references:
//   "Edit %@"


/* WARNING: Type propagation algorithm not settling */

void FUN_00cb58e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong **pplVar8;
  int iVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar10;
  bool bVar11;
  longlong local_200;
  undefined1 local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  longlong local_1d0;
  undefined1 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  longlong *local_d0;
  char local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  undefined8 local_88;
  int local_80;
  longlong *local_70;
  longlong *local_60;
  uint local_58 [2];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  plVar5 = local_60;
  cVar2 = (**(code **)(*(longlong *)*param_2 + 0x370))();
  if (cVar2 == '\0') goto LAB_00cb5f15;
  local_1b8 = *unaff_RSI;
  local_1b0 = '\0';
  local_1a8 = *param_2;
  local_1a0 = '\0';
  cVar2 = (**(code **)(*unaff_RDI + 0x408))();
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_00cb5f15;
  cVar2 = FUN_00d77de0();
  if (cVar2 == '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 0x210))();
    if ((char)local_58[0] == '\0') {
      if (local_60 == (longlong *)0x0) goto LAB_00cb5f15;
      FUN_00d50b00();
      if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_60 == (longlong *)0x0) goto LAB_00cb5f15;
    local_118 = local_60;
    local_110 = '\0';
    (**(code **)(*unaff_RDI + 0x3d0))();
    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_00cb5f15;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x210))();
  if (((char)local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_d8 = local_60;
  if (*(int *)((longlong)local_60 + 0xc) < 0x401) {
    local_c0 = 0;
    local_70 = (longlong *)0x0;
  }
  else {
    local_198 = local_60;
    local_190 = '\0';
    FUN_00cb53b0(1,1);
    local_70 = local_60;
    if (local_60 == (longlong *)0x0) {
      local_70 = (longlong *)0x0;
      local_c0 = 0;
    }
    else if ((char)local_58[0] == '\0') {
      uVar3 = FUN_00d50b00();
      local_c0 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = local_58[0] & 0xffffff00;
      local_c0 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
    }
    if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d23340();
  pplVar8 = &local_a0;
  if ((char)local_58[0] != '\0') {
    pplVar8 = (longlong **)local_58;
  }
  local_a0 = (longlong *)CONCAT71(local_a0._1_7_,(char)local_58[0]);
  *(undefined1 *)pplVar8 = 0;
  if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_1c0 = param_2;
  if ((char)local_a0 == '\0') {
    if (local_60 == (longlong *)0x0) goto LAB_00cb5df4;
    FUN_00d50b00();
LAB_00cb5bc9:
    local_58[0] = local_58[0] & 0xffffff00;
    local_60 = (longlong *)0x0;
    local_50 = plVar5;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar9 = -local_48._4_4_;
        }
        else {
          iVar9 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar9 = 0;
        }
        local_48 = CONCAT44(iVar9,(int)local_48);
      }
      lVar4 = (longlong)(int)local_48;
      iVar9 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar9) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar4 * 8);
      local_98 = '\0';
      local_a0 = local_60;
      cVar2 = FUN_00e3a2e0();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        local_180 = '\0';
        local_188 = local_60;
        (**(code **)(*unaff_RDI + 0x3d0))();
        if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00083b20();
    lVar4 = plVar5[2];
    if (local_70 == (longlong *)0x0) {
      if (0 < *(int *)(lVar4 + 0xc)) {
        lVar10 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar10 * 8);
          local_150 = '\0';
          local_158 = lVar1;
          cVar2 = FUN_00d24090();
          if (cVar2 == '\0') {
            local_140 = '\0';
            local_148 = lVar1;
            cVar2 = (**(code **)(*unaff_RDI + 0x3b0))();
            if ((local_140 != '\0') && (local_148 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            cVar2 = '\0';
          }
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            local_130 = '\0';
            local_138 = lVar1;
            (**(code **)(*unaff_RDI + 0x3e0))();
            if ((local_130 != '\0') && (local_138 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)(lVar4 + 0xc));
      }
    }
    else if (0 < *(int *)(lVar4 + 0xc)) {
      lVar10 = 0;
      do {
        local_60 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + lVar10 * 8);
        local_58[0] = local_58[0] & 0xffffff00;
        cVar2 = FUN_00e3a2e0();
        if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_170 = '\0';
          local_178 = local_60;
          cVar2 = (**(code **)(*unaff_RDI + 0x3b0))();
          if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            local_160 = '\0';
            local_168 = local_60;
            (**(code **)(*unaff_RDI + 0x3e0))();
            if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(lVar4 + 0xc));
    }
  }
  else {
    if (local_60 != (longlong *)0x0) goto LAB_00cb5bc9;
LAB_00cb5df4:
    local_58[0] = local_58[0] & 0xffffff00;
    local_60 = (longlong *)0x0;
    local_50 = plVar5;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar9 = -local_48._4_4_;
        }
        else {
          iVar9 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar9 = 0;
        }
        local_48 = CONCAT44(iVar9,(int)local_48);
      }
      lVar4 = (longlong)(int)local_48;
      iVar9 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar9) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar4 * 8);
      local_120 = '\0';
      local_128 = local_60;
      (**(code **)(*unaff_RDI + 0x3d0))();
      if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00083b20();
  }
  FUN_00d23740();
  param_2 = local_1c0;
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_d8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00cb5f15:
  if (((unaff_RDI[0x12] != 0) && ((char)unaff_RDI[0x1c] != '\0')) && ((int)unaff_RDI[0x1a] == 0)) {
    local_200 = *param_2;
    local_1f8 = 0;
    FUN_00cb6da0(2,&local_200);
    plVar5 = (longlong *)(**(code **)(*(longlong *)*unaff_RSI + 0x188))();
    if (((plVar5 != (longlong *)0x0) && (*plVar5 != 0)) &&
       (cVar2 = (**(code **)(*(longlong *)*param_2 + 0x370))(), cVar2 != '\0')) {
      local_108 = *param_2;
      local_100 = '\0';
      cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x2b8))();
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        (**(code **)(*(longlong *)*unaff_RSI + 0x210))();
        pplVar8 = (longlong **)local_38;
        if ((char)local_58[0] != '\0') {
          pplVar8 = (longlong **)local_58;
        }
        local_38[0] = (char)local_58[0];
        *(undefined1 *)pplVar8 = 0;
        if (((char)local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_60 != (longlong *)0x0) {
          if ((longlong *)*plVar5 != (longlong *)0x0) {
            local_58[0] = local_58[0] & 0xffffff00;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            local_50 = (longlong *)*plVar5;
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar9 = -local_48._4_4_;
                }
                else {
                  iVar9 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar9);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar9 = 0;
                }
                local_48 = CONCAT44(iVar9,(int)local_48);
              }
              iVar9 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar9);
              if (*(int *)((longlong)local_50 + 0xc) <= iVar9) break;
              pVar7 = (pthread_key_t)local_50[2];
              FUN_00e17bc0();
              if (local_a0 == (longlong *)0x0) {
                bVar11 = true;
              }
              else {
                FUN_00e17bc0();
                if (local_b8 == (longlong *)0x0) {
                  bVar11 = false;
                }
                else {
                  FUN_00e17bc0();
                  bVar11 = local_1f0 == *param_2;
                  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (bVar11) {
                cVar2 = FUN_00d77de0();
                if (cVar2 == '\0') {
                  FUN_00e8b690();
                  (**(code **)(*local_60 + 0x360))();
                  cVar2 = FUN_00e85ea0();
                  plVar5 = local_60;
                  if (cVar2 == '\0') {
                    plVar5 = DAT_02802688;
                  }
                  if (plVar5 != (longlong *)0x0) {
                    pvVar6 = _pthread_getspecific(pVar7);
                    if (pvVar6 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_00e8bda0();
                  }
                }
                else {
                  local_98 = '\0';
                  local_a0 = (longlong *)0x0;
                  local_90 = local_60;
                  local_88 = 0xffffffff;
                  local_80 = 0;
                  local_88._4_4_ = 0;
                  while( true ) {
                    if (local_88._4_4_ != 0) {
                      if (local_88._4_4_ < 1) {
                        iVar9 = -local_88._4_4_;
                      }
                      else {
                        iVar9 = (int)local_88 - local_88._4_4_;
                        local_88 = CONCAT44(local_88._4_4_,iVar9);
                        FUN_00d23690();
                        local_80 = local_80 + local_88._4_4_;
                        iVar9 = 0;
                      }
                      local_88 = CONCAT44(iVar9,(int)local_88);
                    }
                    lVar4 = (longlong)(int)local_88;
                    iVar9 = (int)local_88 + 1;
                    local_88 = CONCAT44(local_88._4_4_,iVar9);
                    if (*(int *)((longlong)local_90 + 0xc) <= iVar9) break;
                    plVar5 = *(longlong **)(local_90[2] + 8 + lVar4 * 8);
                    local_b8 = plVar5;
                    local_a0 = plVar5;
                    FUN_00e8b690();
                    pplVar8 = &DAT_02802688;
                    if (plVar5 != (longlong *)0x0) {
                      (**(code **)(*plVar5 + 0x360))();
                      cVar2 = FUN_00e85ea0();
                      pplVar8 = &local_b8;
                      if (cVar2 == '\0') {
                        pplVar8 = &DAT_02802688;
                      }
                    }
                    if (*pplVar8 != (longlong *)0x0) {
                      pvVar6 = _pthread_getspecific((pthread_key_t)pplVar8);
                      if (pvVar6 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_00e8bda0();
                    }
                  }
                  FUN_00e8cae0();
                }
              }
            }
            FUN_00cc12b0();
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  if ((((*(char *)((longlong)unaff_RDI + 0xe1) != '\0') && (unaff_RDI[8] != 0)) &&
      (cVar2 = FUN_00db3680(), cVar2 == '\0')) &&
     ((cVar2 = FUN_00db3920(), cVar2 != '\0' && (cVar2 = FUN_00d74560(), cVar2 == '\0')))) {
    local_f8 = *param_2;
    local_f0 = '\0';
    cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x358))();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_00d74470();
      plVar5 = local_b8;
      local_58[0] = 1;
      local_48 = local_48 & 0xffffffffffffff00;
      if (local_b8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar5;
      local_48 = CONCAT71(local_48._1_7_,1);
      FUN_00d8cb40();
      local_d0 = local_a0;
      local_c8 = 0;
      if (local_98 == '\0') {
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_c8 = '\x01';
      FUN_00db31b0();
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  cVar2 = FUN_00d74560();
  if (cVar2 == '\0') {
    local_e8 = *param_2;
    local_e0 = '\0';
    cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x350))();
    if ((cVar2 == '\0') || (unaff_RDI[0x26] == 0)) {
      bVar11 = false;
    }
    else {
      bVar11 = *(char *)((longlong)unaff_RDI + 0xe1) != '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (bVar11) {
      local_1e0 = *unaff_RSI;
      local_1d8 = 0;
      local_1d0 = *param_2;
      local_1c8 = 0;
      FUN_00cb7af0();
    }
  }
  return;
}


