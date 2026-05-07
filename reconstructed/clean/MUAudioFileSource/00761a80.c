// Function: FUN_00761a80
// Address: 00761a80
// Size: 2569 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00761a80(void* param_1,int64_t *param_2)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t **pplVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar10;
  uint32_t uVar11;
  int64_t *local_150;
  char local_148;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_0075c8d0();
  plVar7 = local_70;
  if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar1 = FUN_00ce6e30();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*plVar7 + 0x420))(), cVar1 == '\0')) {
    uVar8 = 0;
  }
  else {
    lVar3 = *arg1;
    local_48 = plVar7;
    if (lVar3 == 0) {
      FUN_00757c60();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb480();
      plVar6 = local_70;
      plVar10 = (int64_t *)*arg1;
      if (plVar10 == local_70) {
        if (((char)arg1[1] != '\0') || (local_70 == (int64_t *)0x0)) goto LAB_00761bf7;
        if (local_68 == '\0') {
          FUN_00d50b00();
          goto LAB_00761bef;
        }
LAB_00761bb4:
        *(void*)(arg1 + 1) = 1;
        local_68 = '\0';
        plVar7 = local_48;
      }
      else {
        lVar3 = arg1[1];
        if (local_68 != '\0') {
          *arg1 = (int64_t)local_70;
          if (((char)lVar3 != '\0') && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00761bb4;
        }
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar6;
        if (((char)lVar3 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00761bef:
        *(void*)(arg1 + 1) = 1;
        plVar7 = local_48;
LAB_00761bf7:
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar3 = *arg1;
      if (lVar3 != 0) goto LAB_00761c2c;
    }
    else {
LAB_00761c2c:
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = lVar3;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar9 = -local_58._4_4_;
          }
          else {
            iVar9 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar9 = 0;
          }
          local_58 = CONCAT44(iVar9,(int)local_58);
        }
        lVar3 = (int64_t)(int)local_58;
        iVar9 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar9);
        if (*(int *)(local_60 + 0xc) <= iVar9) break;
        plVar7 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar3 * 8);
        local_40 = plVar7;
        local_70 = plVar7;
        if ((g_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          g_026e3230 = FUN_00136df0;
          g_026e3240 = 0;
          ram_00000000026e3248 = 0;
          g_026e3250 = 0;
          ram_00000000026e3258 = 0;
          g_026e3260 = 0;
          ram_00000000026e3268 = 0;
          g_026e3270 = 0;
          ram_00000000026e3278 = 0;
          g_026e3280 = 0;
          ram_00000000026e3288 = 0;
          g_026e3290 = 0;
          ram_00000000026e3298 = 0;
          g_026e32a0 = 0;
          ram_00000000026e32a8 = 0;
          g_026e32b0 = 0;
          ram_00000000026e32b8 = 0;
          g_026e32c0 = 0;
          ram_00000000026e32c8 = 0;
          g_026e32d0 = 0;
          ram_00000000026e32d8 = 0;
          g_026e32e0 = 0;
          ___cxa_guard_release();
        }
        pplVar5 = (int64_t **)&g_02802688;
        if (plVar7 != (int64_t *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar1 = FUN_00e85ea0();
          pplVar5 = &local_40;
          if (cVar1 == '\0') {
            pplVar5 = (int64_t **)&g_02802688;
          }
        }
        plVar7 = local_70;
        if (*pplVar5 != (int64_t *)0x0) {
          pvVar2 = _pthread_getspecific((void*)pplVar5);
          plVar10 = local_70;
          pVar4 = (void*)pplVar5;
          if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar10, lVar3 != 0)) {
            plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar7 + 0x478))();
          (**(code **)(*local_80 + 0x3f0))();
          cVar1 = (**(code **)(*local_40 + 0x50))();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar7 = local_70;
          if (cVar1 == '\0') {
            pvVar2 = _pthread_getspecific(pVar4);
            plVar10 = local_70;
            if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar10, lVar3 != 0)) {
              plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
            cVar1 = (**(code **)(*plVar7 + 0x498))();
            plVar7 = local_70;
            if (cVar1 != '\0') {
              pvVar2 = _pthread_getspecific(pVar4);
              plVar10 = local_70;
              if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar10, lVar3 != 0))
              {
                plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
              }
              (**(code **)(*plVar7 + 0x478))();
              uVar11 = (**(code **)(*local_150 + 0x388))();
              local_90 = local_80;
              local_88 = 0;
              if (local_78 == '\0') {
                if (local_80 != (int64_t *)0x0) {
                  uVar11 = FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              local_88 = '\x01';
              (**(code **)(*local_48 + 0x400))(uVar11,&local_90);
              plVar7 = local_40;
              if (local_38 == '\0') {
                if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                   (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              cVar1 = FUN_00ce6e30();
              plVar10 = plVar7;
              if (cVar1 != '\0') {
                local_118 = 0;
                local_110 = '\0';
                local_108 = 0;
                local_100 = '\0';
                plVar6 = &local_108;
                FUN_00b8a050(plVar6,&local_118,0,1);
                plVar10 = local_40;
                pVar4 = (void*)plVar6;
                if (plVar7 == local_40) {
LAB_00761fea:
                  plVar10 = plVar7;
                  if (local_38 != '\0') {
LAB_00761ff0:
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  if (local_38 == '\0') {
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    if (plVar7 != (int64_t *)0x0) {
                      FUN_00d50b20();
                      plVar7 = plVar10;
                      goto LAB_00761fea;
                    }
                    if (local_38 == '\0') goto LAB_00761ffe;
                    goto LAB_00761ff0;
                  }
                  if (plVar7 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  local_38 = '\0';
                }
LAB_00761ffe:
                if ((local_100 != '\0') && (local_108 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_110 != '\0') && (local_118 != 0)) {
                  FUN_00d50b20();
                }
              }
              plVar7 = local_70;
              if (*param_2 == 0) {
LAB_00762187:
                pvVar2 = _pthread_getspecific(pVar4);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_d0 = '\0';
                local_d8 = plVar10;
                FUN_0123bf80();
                if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar2 = _pthread_getspecific(pVar4);
                plVar6 = local_70;
                if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar6, lVar3 != 0)
                   ) {
                  plVar7 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar7 + 0x478))();
                (**(code **)(*local_80 + 0x3f0))();
                local_f8 = *param_2;
                local_f0 = '\0';
                cVar1 = (**(code **)(*local_40 + 0x50))();
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar1 == '\0') goto LAB_00762187;
                pvVar2 = _pthread_getspecific(pVar4);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_e0 = '\0';
                local_e8 = plVar10;
                FUN_0123bf50();
                if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0123b100();
              FUN_00b875e0();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar10 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      FUN_00136d50();
      plVar7 = local_48;
    }
    (**(code **)(*this_ptr + 0x498))();
    FUN_00cb1f10();
    FUN_00db3760();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x578))();
    FUN_00d403d0();
    local_c8 = g_026fce60;
    if (g_026fce60 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_a0 = 0;
    FUN_00d50b00();
    local_a0 = '\x01';
    local_b8 = 0;
    local_b0 = '\0';
    local_a8 = this_ptr;
    FUN_00d40470(&local_b8,&local_a8,1,3);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
    if (plVar7 == (int64_t *)0x0) goto LAB_00762486;
  }
  FUN_00d50b20();
LAB_00762486:
  return uVar8 & 0xffffffff;
}

