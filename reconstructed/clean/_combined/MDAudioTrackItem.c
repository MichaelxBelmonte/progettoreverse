// ===================================================================
// MDAudioTrackItem — Complete reconstructed pseudocode
// 25 functions
// ===================================================================

// Registered properties (1):
//   MDAudioTrackItemType _trackItemType


// ============================================================
// 0037d660
// ============================================================
// Function: FUN_0037d660
// Address: 0037d660
// Size: 3797 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
//   "MUAudioFileSource"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0037d660(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  void *pvVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  int iVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  uint64_t local_78;
  int local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  plVar1 = (int64_t *)*arg1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x630))();
    plVar2 = local_68;
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      return;
    }
  }
  FUN_01f07b90();
  FUN_00d216c0();
  (**(code **)(*this_ptr + 0x630))();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0037d7b7;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_0037d7b7:
    local_60 = '\0';
    local_68 = (int64_t *)0x0;
    local_58 = plVar1;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar9 = -local_50._4_4_;
        }
        else {
          iVar9 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar9);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar9 = 0;
        }
        local_50 = CONCAT44(iVar9,(int)local_50);
      }
      lVar4 = (int64_t)(int)local_50;
      iVar9 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar9);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar9) break;
      plVar1 = *(int64_t **)(local_58[2] + 8 + lVar4 * 8);
      local_90 = plVar1;
      local_68 = plVar1;
      FUN_0006e1c0();
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_90;
        if (cVar3 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar8 != (int64_t *)0x0) {
        pvVar5 = _pthread_getspecific((void*)pplVar8);
        pVar6 = (void*)pplVar8;
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        if (local_88 == '\0') {
          if (local_90 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0037d930;
          }
        }
        else if (local_90 != (int64_t *)0x0) {
LAB_0037d930:
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          plVar1 = local_90;
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
          pplVar8 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar8 = &local_90;
            if (cVar3 == '\0') {
              pplVar8 = (int64_t **)&g_02802688;
            }
          }
          plVar1 = *pplVar8;
          if (*(char *)(pplVar8 + 1) == '\0') {
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar8 + 1) = 0;
          }
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            local_88 = '\0';
            local_90 = plVar1;
            FUN_00d235a0();
            if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
    FUN_002d7220();
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x630))();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0037db4f;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_0037db4f:
    local_60 = '\0';
    local_68 = (int64_t *)0x0;
    local_58 = plVar1;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar9 = -local_50._4_4_;
        }
        else {
          iVar9 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar9);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar9 = 0;
        }
        local_50 = CONCAT44(iVar9,(int)local_50);
      }
      lVar4 = (int64_t)(int)local_50;
      iVar9 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar9);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar9) break;
      plVar1 = *(int64_t **)(local_58[2] + 8 + lVar4 * 8);
      local_90 = plVar1;
      local_68 = plVar1;
      FUN_000823a0();
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_90;
        if (cVar3 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar8 != (int64_t *)0x0) {
        pvVar5 = _pthread_getspecific((void*)pplVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        plVar1 = local_90;
        if (local_88 == '\0') {
          if (local_90 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0037dccb;
          }
        }
        else if (local_90 != (int64_t *)0x0) {
LAB_0037dccb:
          local_88 = '\0';
          local_90 = (int64_t *)0x0;
          local_80 = plVar1;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_78._4_4_ = 0;
          while( true ) {
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar9 = -local_78._4_4_;
              }
              else {
                iVar9 = (int)local_78 - local_78._4_4_;
                local_78 = CONCAT44(local_78._4_4_,iVar9);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar9 = 0;
              }
              local_78 = CONCAT44(iVar9,(int)local_78);
            }
            lVar4 = (int64_t)(int)local_78;
            iVar9 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar9);
            if (*(int *)((int64_t)local_80 + 0xc) <= iVar9) break;
            lVar7 = local_80[2];
            local_90 = *(int64_t **)(lVar7 + 8 + lVar4 * 8);
            pvVar5 = _pthread_getspecific((void*)lVar7);
            pVar6 = (void*)lVar7;
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0037ddf0;
              }
            }
            else if (local_40 != (int64_t *)0x0) {
LAB_0037ddf0:
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01320d00();
              plVar1 = local_40;
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
              pplVar8 = (int64_t **)&g_02802688;
              if (plVar1 != (int64_t *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar8 = &local_40;
                if (cVar3 == '\0') {
                  pplVar8 = (int64_t **)&g_02802688;
                }
              }
              plVar1 = *pplVar8;
              if (*(char *)(pplVar8 + 1) == '\0') {
                if (plVar1 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(void*)(pplVar8 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar1 != (int64_t *)0x0) {
                local_38 = '\0';
                local_40 = plVar1;
                FUN_00d235a0();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          FUN_001159b0();
          FUN_00d50b20();
        }
      }
    }
    FUN_0038d310();
    FUN_00d50b20();
  }
  uVar10 = (**(code **)(*this_ptr + 0x630))();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_0037e5cd;
    uVar10 = FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else if (local_68 == (int64_t *)0x0) goto LAB_0037e5cd;
  local_60 = '\0';
  local_68 = (int64_t *)0x0;
  local_58 = plVar1;
  local_50 = 0xffffffff;
  local_48 = 0;
  iVar9 = 0;
  while( true ) {
    if (iVar9 != 0) {
      if (iVar9 < 1) {
        iVar9 = -iVar9;
      }
      else {
        local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar9);
        uVar10 = FUN_00d23690(uVar10,iVar9);
        local_48 = local_48 + iVar9;
        iVar9 = 0;
      }
      local_50 = CONCAT44(iVar9,(int)local_50);
    }
    lVar4 = (int64_t)(int)local_50;
    iVar9 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar9);
    if (*(int *)((int64_t)local_58 + 0xc) <= iVar9) break;
    plVar1 = *(int64_t **)(local_58[2] + 8 + lVar4 * 8);
    local_68 = plVar1;
    local_90 = plVar1;
    if ((g_02700970 == '\0') &&
       (iVar9 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_00, iVar9 != 0)) {
      g_026d78f8 = FUN_0006e710();
      g_026d78e0 = "MDAudioTrackItem";
      g_026d78e8 = 0x70;
      g_026d78f0 = FUN_0006e6c0;
      g_026d7900 = 0;
      ram_00000000026d7908 = 0;
      g_026d7910 = 0;
      g_026d7988 = 0;
      ram_00000000026d7990 = 0;
      g_026d7998 = 0;
      g_026d799a = 1;
      g_026d7918 = 0;
      ram_00000000026d7920 = 0;
      g_026d7928 = 0;
      ram_00000000026d7930 = 0;
      g_026d7938 = 0;
      ram_00000000026d7940 = 0;
      g_026d7948 = 0;
      ram_00000000026d7950 = 0;
      g_026d7958 = 0;
      ram_00000000026d7960 = 0;
      g_026d7968 = 0;
      ram_00000000026d7970 = 0;
      g_026d7978 = 0;
      ram_00000000026d7980 = 0;
      g_026d79a3 = 0;
      g_026d799b = 0;
      uVar10 = ___cxa_guard_release();
    }
    pplVar8 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar8 = &local_90;
      uVar10 = extraout_XMM0_Da;
      if (cVar3 == '\0') {
        pplVar8 = (int64_t **)&g_02802688;
      }
    }
    if (*pplVar8 != (int64_t *)0x0) {
      uVar10 = FUN_00075b90();
      plVar1 = local_90;
      pVar6 = (void*)pplVar8;
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00075b90();
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_012e5ae0();
        plVar1 = local_90;
        if (local_88 == '\0') {
          if (((local_90 != (int64_t *)0x0) && (uVar10 = FUN_00d50b00(), local_88 != '\0')) &&
             (local_90 != (int64_t *)0x0)) {
            uVar10 = FUN_00d50b20();
          }
        }
        else {
          local_88 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          local_88 = '\0';
          local_90 = (int64_t *)0x0;
          local_80 = plVar1;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_78._4_4_ = 0;
          while( true ) {
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar9 = -local_78._4_4_;
              }
              else {
                iVar9 = (int)local_78 - local_78._4_4_;
                local_78 = CONCAT44(local_78._4_4_,iVar9);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar9 = 0;
              }
              local_78 = CONCAT44(iVar9,(int)local_78);
            }
            lVar4 = (int64_t)(int)local_78;
            iVar9 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar9);
            if (*(int *)((int64_t)local_80 + 0xc) <= iVar9) break;
            lVar7 = local_80[2];
            local_90 = *(int64_t **)(lVar7 + 8 + lVar4 * 8);
            pvVar5 = _pthread_getspecific((void*)lVar7);
            pVar6 = (void*)lVar7;
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0037e2f0;
              }
            }
            else if (local_40 != (int64_t *)0x0) {
LAB_0037e2f0:
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01320d00();
              plVar1 = local_40;
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
              pplVar8 = (int64_t **)&g_02802688;
              if (plVar1 != (int64_t *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar8 = &local_40;
                if (cVar3 == '\0') {
                  pplVar8 = (int64_t **)&g_02802688;
                }
              }
              plVar1 = *pplVar8;
              if (*(char *)(pplVar8 + 1) == '\0') {
                if (plVar1 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(void*)(pplVar8 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar1 != (int64_t *)0x0) {
                local_38 = '\0';
                local_40 = plVar1;
                FUN_00d235a0();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          FUN_001159b0();
          uVar10 = FUN_00d50b20();
        }
      }
    }
    iVar9 = local_50._4_4_;
  }
  FUN_0038d380();
  FUN_00d50b20();
LAB_0037e5cd:
  FUN_0037ebb0();
  return;
}



// ============================================================
// 0055b680
// ============================================================
// Function: FUN_0055b680
// Address: 0055b680
// Size: 4114 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


uint FUN_0055b680(uint64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  void* in_ECX;
  void* pVar12;
  int64_t *plVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t **pplVar16;
  int iVar17;
  int64_t *this_ptr;
  undefined7 uVar18;
  uint64_t uVar19;
  double dVar20;
  double dVar21;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  uint64_t local_c8;
  int64_t *local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  uint64_t local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38 [8];
  
  local_c8 = param_1;
  FUN_01bc84c0();
  FUN_01bc5d70();
  local_98 = local_68;
  if ((char)local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60._0_1_ = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_002ee280();
  plVar1 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_0055b7e0;
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar17 = *(int *)((int64_t)plVar1 + 0xc);
  }
  else {
    if (local_68 == (int64_t *)0x0) {
LAB_0055b7e0:
      uVar3 = 0;
      goto LAB_0055c63f;
    }
    iVar17 = *(int *)((int64_t)local_68 + 0xc);
  }
  if (iVar17 != 0) {
    local_b0 = plVar1;
    FUN_00d23340();
    plVar1 = local_68;
    plVar13 = &local_78;
    if ((char)local_60 != '\0') {
      plVar13 = &local_60;
    }
    local_78 = CONCAT71(local_78._1_7_,(char)local_60);
    *(void*)plVar13 = 0;
    if (((char)local_60 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar5 = FUN_00e8b990();
    if (lVar5 == 0) {
      cVar2 = '\0';
    }
    else {
      FUN_00d23340();
      plVar13 = local_68;
      local_a8._0_1_ = (char)local_60;
      plVar11 = &local_a8;
      if ((char)local_60 != '\0') {
        plVar11 = &local_60;
      }
      *(void*)plVar11 = 0;
      if (((char)local_60 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      cVar2 = FUN_00cb2340();
      if (((char)local_a8 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (((char)local_78 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_01be80e0();
      plVar1 = local_68;
      if (((((char)local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), (char)local_60 != '\0')) && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar11 = local_68;
      local_38[0] = (char)local_60;
      plVar13 = &local_60;
      plVar10 = (int64_t *)local_38;
      if ((char)local_60 != '\0') {
        plVar10 = plVar13;
      }
      *(char *)plVar10 = '\0';
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar12 = (void*)plVar13;
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      lVar5 = local_78;
      if (local_70 == '\0') {
        if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
      }
      if ((local_a0 != '\0') && (CONCAT71(local_a8._1_7_,(char)local_a8) != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar6 = FUN_00e7bdb0();
      FUN_01bf03a0();
      plVar13 = local_68;
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 != (int64_t *)0x0) {
        FUN_01bf03a0();
        uVar6 = FUN_01a905b0();
        if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_e0 = (int64_t *)0x0;
      FUN_00243390();
      local_d0 = local_68;
      if (((((char)local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), (char)local_60 != '\0')) && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_60._0_1_ = '\0';
      local_68 = (int64_t *)0x0;
      local_58 = local_b0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar17 = -local_50._4_4_;
          }
          else {
            iVar17 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar17);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar17 = 0;
          }
          local_50 = CONCAT44(iVar17,(int)local_50);
        }
        lVar7 = (int64_t)(int)local_50;
        iVar17 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar17);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar17) break;
        lVar14 = local_58[2];
        local_68 = *(int64_t **)(lVar14 + 8 + lVar7 * 8);
        pvVar4 = _pthread_getspecific((void*)lVar14);
        pVar12 = (void*)lVar14;
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012641c0();
        lVar7 = local_78;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          pvVar4 = _pthread_getspecific(pVar12);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012641c0();
          lVar7 = CONCAT71(local_a8._1_7_,(char)local_a8);
          if (local_a0 == '\0') {
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_70 = '\0';
          local_78 = lVar7;
          FUN_00d235a0();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (CONCAT71(local_a8._1_7_,(char)local_a8) != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar4 = _pthread_getspecific(pVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012640f0();
        lVar7 = local_78;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          pvVar4 = _pthread_getspecific(pVar12);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012640f0();
          lVar7 = CONCAT71(local_a8._1_7_,(char)local_a8);
          if (local_a0 == '\0') {
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_70 = '\0';
          local_78 = lVar7;
          FUN_00d235a0();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (CONCAT71(local_a8._1_7_,(char)local_a8) != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_001159b0();
      FUN_01be8270();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_c8 = FUN_01e437f0(local_c8);
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar19 = (**(code **)(*plVar1 + 0x388))(local_c8);
      local_80 = (int64_t *)0x0;
      local_90 = (int64_t *)0x0;
      local_40 = (int64_t *)0x0;
      local_88 = 0;
      plVar13 = (int64_t *)0x0;
      uVar3 = 0;
      uVar9 = 0;
      do {
        uVar9 = uVar9 & 0xffffffff;
        plVar11 = plVar13;
        do {
          uVar8 = (**(code **)(*this_ptr + 0x658))();
          plVar13 = local_68;
          cVar2 = (char)uVar9;
          if (local_68 == plVar11) {
            plVar13 = plVar11;
            local_c8 = uVar9;
            if ((cVar2 == '\0') && (local_68 != (int64_t *)0x0)) {
              if ((char)local_60 != '\0') goto LAB_0055bf73;
              local_c8 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
              FUN_00d50b00();
            }
          }
          else if ((char)local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              uVar8 = FUN_00d50b00();
            }
            local_c8 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
            if ((cVar2 != '\0') && (plVar11 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((cVar2 != '\0') && (plVar11 != (int64_t *)0x0)) {
              uVar8 = FUN_00d50b20();
            }
LAB_0055bf73:
            local_60._0_1_ = '\0';
            local_c8 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          }
          if (plVar13 == (int64_t *)0x0) {
            if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_0055c5e4:
            if (local_d0 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_0055c633;
          }
          iVar17 = FUN_01d3a5a0();
          if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar17 == 6) {
            if ((char)local_c8 != '\0') {
              FUN_00d50b20();
            }
            goto LAB_0055c5e4;
          }
          iVar17 = FUN_01d3a5a0();
          uVar9 = local_c8 & 0xffffffff;
          plVar11 = plVar13;
        } while (iVar17 != 5);
        uVar15 = local_c8;
        cVar2 = (**(code **)(*plVar1 + 0x3c8))();
        pVar12 = (void*)uVar15;
        uVar18 = (undefined7)(uVar9 >> 8);
        if ((cVar2 == '\0') || (uVar9 = FUN_01d3b590(), (uVar9 & 8) != 0)) {
          FUN_01be8120();
          plVar11 = local_68;
          if (local_68 == local_40) {
            if (((char)local_88 == '\0') && (local_68 != (int64_t *)0x0)) {
              if ((char)local_60 != '\0') goto LAB_0055c197;
              uVar9 = CONCAT71(uVar18,1);
              FUN_00d50b00();
              plVar11 = local_80;
            }
            else {
              uVar9 = local_88 & 0xffffffff;
              plVar11 = local_80;
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_e0 = local_68;
              uVar9 = CONCAT71(uVar18,1);
              if (((char)local_88 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_0055c127;
              FUN_00d50b20();
              local_90 = plVar11;
              local_40 = plVar11;
              goto LAB_0055c245;
            }
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_e0 = plVar11;
            uVar9 = CONCAT71(uVar18,1);
            if (((char)local_88 == '\0') || (local_40 == (int64_t *)0x0)) {
              local_90 = plVar11;
              local_40 = plVar11;
            }
            else {
              FUN_00d50b20();
              local_90 = plVar11;
              local_40 = plVar11;
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01be8160();
          plVar11 = local_68;
          if (local_68 == local_40) {
            if (((char)local_88 == '\0') && (local_40 != (int64_t *)0x0)) {
              if ((char)local_60 != '\0') {
LAB_0055c197:
                uVar9 = CONCAT71(uVar18,1);
                plVar11 = local_80;
                goto LAB_0055c245;
              }
              uVar9 = CONCAT71(uVar18,1);
              FUN_00d50b00();
              plVar11 = local_80;
            }
            else {
              uVar9 = local_88 & 0xffffffff;
              plVar11 = local_80;
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_e0 = local_68;
              uVar9 = CONCAT71(uVar18,1);
              if (((char)local_88 == '\0') || (local_40 == (int64_t *)0x0)) {
LAB_0055c127:
                uVar9 = CONCAT71(uVar18,1);
                plVar11 = local_68;
                local_e0 = local_68;
                local_90 = local_68;
                local_40 = local_68;
              }
              else {
                FUN_00d50b20();
                local_90 = plVar11;
                local_40 = plVar11;
              }
              goto LAB_0055c245;
            }
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_e0 = plVar11;
            uVar9 = CONCAT71(uVar18,1);
            if (((char)local_88 == '\0') || (local_40 == (int64_t *)0x0)) {
              local_90 = plVar11;
              local_40 = plVar11;
            }
            else {
              FUN_00d50b20();
              local_90 = plVar11;
              local_40 = plVar11;
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_0055c245:
        local_88 = uVar9;
        local_80 = plVar11;
        FUN_01d3abf0();
        uVar8 = FUN_01e466c0();
        FUN_01be8270();
        FUN_00d50b00();
        uVar8 = FUN_01e437f0(uVar8);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar8 = (**(code **)(*plVar1 + 0x388))(uVar8);
        if ((char)uVar3 != '\0') {
          FUN_00d23340();
          plVar11 = local_68;
          local_78 = CONCAT71(local_78._1_7_,(char)local_60);
          plVar10 = &local_60;
          if ((char)local_60 == '\0') {
            plVar10 = &local_78;
          }
          *(void*)plVar10 = 0;
          if (((char)local_60 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar12);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          plVar10 = (int64_t *)FUN_00e8b990();
          (**(code **)(*plVar10 + 0x3b8))();
          if (((char)local_78 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00083c20();
        pplVar16 = (int64_t **)&g_02802688;
        if (local_40 != (int64_t *)0x0) {
          (**(code **)(*local_40 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar16 = &local_e0;
          if (cVar2 == '\0') {
            pplVar16 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar16 == (int64_t *)0x0) {
          dVar20 = (double)(**(code **)(*local_40 + 0x370))(uVar8);
          pVar12 = (void*)pplVar16;
          dVar21 = (double)(**(code **)(*local_40 + 0x370))(uVar19);
          FUN_0127f970(dVar20 - dVar21);
        }
        else {
          plVar11 = (int64_t *)FUN_01a8fc90(uVar8);
          local_78 = FUN_01a8fc90(uVar19);
          local_68 = plVar11;
          FUN_00e7b970();
          pVar12 = 0;
          FUN_01278f90(0,uVar6);
        }
        FUN_00d23340();
        plVar11 = local_68;
        local_78 = CONCAT71(local_78._1_7_,(char)local_60);
        plVar10 = &local_60;
        if ((char)local_60 == '\0') {
          plVar10 = &local_78;
        }
        *(void*)plVar10 = 0;
        if (((char)local_60 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar10 = (int64_t *)FUN_00e8b990();
        uVar3 = (**(code **)(*plVar10 + 0x3c0))();
        uVar9 = local_c8;
        if (((char)local_78 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
          uVar9 = local_c8;
        }
      } while( true );
    }
  }
  uVar3 = 0;
LAB_0055c633:
  FUN_00d50b20();
LAB_0055c63f:
  if (local_98 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar3 & 0xffffff01;
}



// ============================================================
// 00559ea0
// ============================================================
// Function: FUN_00559ea0
// Address: 00559ea0
// Size: 3295 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_00559ea0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  byte bVar10;
  int64_t **pplVar11;
  uint64_t uVar12;
  double dVar13;
  uint64_t uVar14;
  int64_t local_130;
  char local_128;
  int64_t *local_f8;
  char local_f0;
  int64_t local_88;
  char local_80;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 != 1) || (iVar6 = FUN_01d3b630(), iVar6 != 1)) {
    FUN_01e459c0();
    return;
  }
  uVar7 = FUN_01d3b590();
  uVar8 = FUN_01d3b590();
  iVar6 = FUN_01d3b620();
  if (iVar6 == 1) {
    FUN_01d3abf0();
    uVar12 = FUN_01e466c0();
    FUN_01bc84c0();
    FUN_01bc5de0();
    cVar4 = FUN_01bc0690();
    if (cVar4 == '\0') {
      bVar5 = 0;
    }
    else {
      FUN_01bc84c0();
      FUN_01bc5de0();
      FUN_01bc0990();
      FUN_01bc84c0();
      if (local_f0 == '\0') {
        if (local_f8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_f0 = '\0';
      }
      local_40 = local_f8;
      local_38 = '\0';
      bVar5 = FUN_00d23d70();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_f8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    uVar8 = (uVar8 & 2) >> 1;
    bVar5 = bVar5 ^ 1 | (byte)uVar8;
    if (bVar5 == 1) {
      FUN_01bc84c0();
      FUN_01bc5de0();
      cVar4 = FUN_01bc0690();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        FUN_01bc84c0();
        FUN_01bc5de0();
        FUN_01bbfb40();
        FUN_01bc84c0();
        FUN_01bc5de0();
        if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        FUN_01bef350(uVar8,(uVar7 & 4) >> 2,0);
        if (local_70 != 0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01bc84c0();
      FUN_01bc5de0();
      FUN_01bc84c0();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_01bc1970(uVar8,(uVar7 & 4) >> 2,0);
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar2 = g_026f6de0;
    if (g_026f6de0 != 0) {
      FUN_00d50b00();
    }
    dVar13 = (double)FUN_00e7d6f0();
    uVar9 = (uint64_t)(dVar13 * g_023907c0);
    uVar9 = (int64_t)(dVar13 * g_023907c0 - g_023907c8) & (int64_t)uVar9 >> 0x3f | uVar9;
    uVar14 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar14 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    bVar10 = (char)uVar9 + (char)(uVar9 / 3) * -3;
    local_50 = lVar2;
    local_48 = '\0';
    FUN_000175c0(uVar14,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      bVar10 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((plVar3 != (int64_t *)0x0 & bVar10) == 1) {
      cVar4 = FUN_0055b680(uVar12);
      if (cVar4 == '\0') {
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (bVar5 == 0) {
          FUN_01bc84c0();
          FUN_01bc5de0();
          FUN_01bc84c0();
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          uVar7 = (uVar7 & 4) >> 2;
          FUN_01bc1970(0,uVar7,0);
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          FUN_01bc84c0();
          FUN_01bc5de0();
          FUN_01bbfb40();
          FUN_01bc84c0();
          FUN_01bc5de0();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_01bef350(0,uVar7,0);
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else if (lVar2 != 0) {
      FUN_00d50b20();
    }
    cVar4 = FUN_01e420b0();
    if (cVar4 != '\0') {
      return;
    }
    FUN_01e42250();
    FUN_01bc84c0();
    FUN_01bc5d70();
    cVar4 = FUN_01e42170();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      return;
    }
    FUN_01e42030();
    FUN_01bc84c0();
    FUN_01bc5d70();
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_01d8cd90();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 == '\0') {
      return;
    }
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  iVar6 = FUN_01d3b620();
  if (iVar6 != 2) {
    return;
  }
  FUN_01bc84c0();
  FUN_01bc5de0();
  FUN_01bbfb40();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01bc84c0();
  FUN_01bc5de0();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01bef350((uVar8 & 2) >> 1,(uVar7 & 4) >> 2,1);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_01bc84c0();
  pplVar11 = &local_40;
  FUN_01bc5de0();
  plVar1 = local_40;
  if ((g_02700970 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026d78f8 = FUN_0006e710();
    g_026d78e0 = "MDAudioTrackItem";
    g_026d78e8 = 0x70;
    g_026d78f0 = FUN_0006e6c0;
    g_026d7900 = 0;
    ram_00000000026d7908 = 0;
    g_026d7910 = 0;
    g_026d7988 = 0;
    ram_00000000026d7990 = 0;
    g_026d7998 = 0;
    g_026d799a = 1;
    g_026d7918 = 0;
    ram_00000000026d7920 = 0;
    g_026d7928 = 0;
    ram_00000000026d7930 = 0;
    g_026d7938 = 0;
    ram_00000000026d7940 = 0;
    g_026d7948 = 0;
    ram_00000000026d7950 = 0;
    g_026d7958 = 0;
    ram_00000000026d7960 = 0;
    g_026d7968 = 0;
    ram_00000000026d7970 = 0;
    g_026d7978 = 0;
    ram_00000000026d7980 = 0;
    g_026d79a3 = 0;
    g_026d799b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_0055a1ab;
  }
  pplVar11 = (int64_t **)&g_02802688;
LAB_0055a1ab:
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00075b90();
    if (local_40 != (int64_t *)0x0) {
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_002ecd30();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002e4d80
// ============================================================
// Function: FUN_002e4d80
// Address: 002e4d80
// Size: 1798 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void*
FUN_002e4d80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  char *pcVar6;
  void* pVar7;
  int64_t **pplVar8;
  int iVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  void*this_ptr;
  int64_t *plVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_e8;
  char local_e0;
  int64_t *plVar14;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_b0;
  char local_a8 [8];
  int64_t *local_a0;
  uint64_t local_98;
  int local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70 [8];
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  char local_50 [8];
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x2572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  plVar1 = local_b0;
  local_50[0] = local_a8[0];
  pcVar6 = local_50;
  if (local_a8[0] != '\0') {
    pcVar6 = local_a8;
  }
  *pcVar6 = '\0';
  if ((local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_002e5475;
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  plVar11 = local_b0;
  pcVar6 = local_a8;
  if (local_a8[0] == '\0') {
    pcVar6 = local_48;
  }
  local_48[0] = local_a8[0];
  *pcVar6 = '\0';
  if ((local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_38[0] = '\0';
  uVar13 = FUN_01beead0();
  plVar14 = local_b0;
  if (local_a8[0] == '\0') {
    if (local_b0 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
      if ((local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      goto LAB_002e4f7f;
    }
  }
  else if (local_b0 != (int64_t *)0x0) {
LAB_002e4f7f:
    local_88 = plVar11;
    local_a8[0] = '\0';
    local_b0 = (int64_t *)0x0;
    local_a0 = plVar14;
    local_98 = 0xffffffff;
    local_90 = 0;
    plVar10 = (int64_t *)0x0;
    plVar11 = (int64_t *)0x0;
    iVar9 = 0;
    while( true ) {
      if (iVar9 != 0) {
        if (iVar9 < 1) {
          iVar9 = -iVar9;
        }
        else {
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 - iVar9);
          uVar13 = FUN_00d23690(uVar13,iVar9,param_3,param_4,plVar14);
          local_90 = local_90 + iVar9;
          iVar9 = 0;
        }
        local_98 = CONCAT44(iVar9,(int)local_98);
      }
      lVar5 = (int64_t)(int)local_98;
      iVar9 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar9);
      if (*(int *)((int64_t)local_a0 + 0xc) <= iVar9) break;
      plVar12 = *(int64_t **)(local_a0[2] + 8 + lVar5 * 8);
      local_b0 = plVar12;
      if ((g_02700970 == '\0') &&
         (iVar9 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_00, iVar9 != 0)) {
        g_026d78f8 = FUN_0006e710();
        g_026d78e0 = "MDAudioTrackItem";
        g_026d78e8 = 0x70;
        g_026d78f0 = FUN_0006e6c0;
        g_026d7900 = 0;
        ram_00000000026d7908 = 0;
        g_026d7910 = 0;
        g_026d7988 = 0;
        ram_00000000026d7990 = 0;
        g_026d7998 = 0;
        g_026d799a = 1;
        g_026d7918 = 0;
        ram_00000000026d7920 = 0;
        g_026d7928 = 0;
        ram_00000000026d7930 = 0;
        g_026d7938 = 0;
        ram_00000000026d7940 = 0;
        g_026d7948 = 0;
        ram_00000000026d7950 = 0;
        g_026d7958 = 0;
        ram_00000000026d7960 = 0;
        g_026d7968 = 0;
        ram_00000000026d7970 = 0;
        g_026d7978 = 0;
        ram_00000000026d7980 = 0;
        g_026d79a3 = 0;
        g_026d799b = 0;
        uVar13 = ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_b0;
        uVar13 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar12 = *pplVar8;
      if (*pplVar8 == plVar11) {
        plVar12 = plVar11;
      }
      if (plVar12 == (int64_t *)0x0) {
        if (plVar10 != (int64_t *)0x0) {
          if (local_38[0] != '\0') {
            uVar13 = FUN_00d50b20();
          }
          local_38[0] = '\0';
        }
        plVar10 = (int64_t *)0x0;
      }
      else {
        uVar13 = FUN_00075b90();
        plVar11 = local_78;
        if (plVar10 == local_78) {
          plVar11 = plVar10;
          if (((local_38[0] == '\0') && (plVar10 != (int64_t *)0x0)) && (local_70[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_002e5125;
          }
        }
        else {
          if (local_70[0] == '\0') {
            if (plVar10 != (int64_t *)0x0 && local_38[0] != '\0') {
              uVar13 = FUN_00d50b20();
            }
            pcVar6 = local_38;
          }
          else {
            if (plVar10 != (int64_t *)0x0 && local_38[0] != '\0') {
              uVar13 = FUN_00d50b20();
            }
            local_38[0] = '\x01';
            plVar10 = plVar11;
LAB_002e5125:
            local_38[0] = '\x01';
            pcVar6 = local_70;
            plVar11 = plVar10;
          }
          *pcVar6 = '\0';
          plVar10 = plVar11;
          plVar11 = local_78;
        }
        if ((local_70[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      if ((plVar10 == plVar1) || (plVar10 == local_88)) {
        uVar13 = FUN_01bc0650();
        plVar11 = local_78;
        local_40[0] = local_70[0];
        pcVar6 = local_70;
        if (local_70[0] == '\0') {
          pcVar6 = local_40;
        }
        *pcVar6 = '\0';
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (plVar11 != (int64_t *)0x0) {
          uVar13 = (**(code **)(*plVar11 + 0x4a0))();
          plVar11 = local_78;
          if (local_70[0] == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_002e520c;
            }
          }
          else if (local_78 != (int64_t *)0x0) {
LAB_002e520c:
            local_70[0] = '\0';
            local_78 = (int64_t *)0x0;
            local_80 = plVar11;
            local_68 = plVar11;
            local_60 = 0xffffffff;
            local_58 = 0;
            local_60._4_4_ = 0;
            while( true ) {
              if (local_60._4_4_ != 0) {
                if (local_60._4_4_ < 1) {
                  iVar9 = -local_60._4_4_;
                }
                else {
                  iVar9 = (int)local_60 - local_60._4_4_;
                  local_60 = CONCAT44(local_60._4_4_,iVar9);
                  FUN_00d23690();
                  local_58 = local_58 + local_60._4_4_;
                  iVar9 = 0;
                }
                local_60 = CONCAT44(iVar9,(int)local_60);
              }
              lVar5 = (int64_t)(int)local_60;
              iVar9 = (int)local_60 + 1;
              local_60 = CONCAT44(local_60._4_4_,iVar9);
              if (*(int *)((int64_t)local_68 + 0xc) <= iVar9) break;
              local_78 = *(int64_t **)(local_68[2] + 8 + lVar5 * 8);
              FUN_01bc84c0();
              (**(code **)(*local_e8 + 0x398))();
              if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (local_d0 == plVar1) {
                local_d0 = local_78;
                local_c8 = '\0';
                FUN_00d21140();
              }
            }
            FUN_000a9680();
            uVar13 = FUN_00d50b20();
          }
          if (local_40[0] != '\0') {
            uVar13 = FUN_00d50b20();
          }
        }
      }
      plVar11 = plVar12;
      iVar9 = local_98._4_4_;
    }
    FUN_002e0650();
    FUN_00d50b20();
    plVar11 = local_88;
    if ((local_38[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_48[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_002e5475:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if ((local_50[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0006c760
// ============================================================
// Function: FUN_0006c760
// Address: 0006c760
// Size: 2360 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0006c760(void* param_1,float param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t *this_ptr;
  char *pcVar8;
  bool bVar9;
  float fVar10;
  double dVar11;
  char local_e8;
  undefined7 uStack_e7;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  char local_c8;
  undefined7 uStack_c7;
  char local_c0;
  double local_b8;
  double local_b0;
  uint64_t local_a8;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_54;
  double local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  FUN_01e478c0();
  if ((char)this_ptr[0x31] == '\0') {
    return;
  }
  *(void*)(this_ptr + 0x31) = 0;
  (**(code **)(*this_ptr + 0x948))();
  dVar11 = local_50;
  if ((local_48[0] != '\0') && (local_50 != 0.0)) {
    FUN_00d50b20();
  }
  if (dVar11 == 0.0) {
    return;
  }
  fVar10 = (float)FUN_01e436c0();
  local_b8 = (double)((param_2 * g_0239011c + fVar10 + g_0239012c) /
                     *(float *)((int64_t)this_ptr + 0x15c));
  this_ptr[0x2e] = (int64_t)local_b8;
  (**(code **)(*this_ptr + 0x948))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  if (local_78 == 0) {
    bVar9 = false;
  }
  else {
    (**(code **)(*this_ptr + 0x948))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01327a50();
    FUN_00d23310();
    dVar11 = local_50;
    local_40[0] = local_48[0];
    pcVar6 = local_40;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0.0)) {
      FUN_00d50b20();
    }
    if (dVar11 == 0.0) {
      bVar9 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x948))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01327a50();
      FUN_00d23310();
      dVar11 = local_50;
      pcVar6 = local_38;
      pcVar8 = local_48;
      if (local_48[0] == '\0') {
        pcVar8 = pcVar6;
      }
      local_38[0] = local_48[0];
      *pcVar8 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0.0)) {
        FUN_00d50b20();
      }
      param_1 = (void*)pcVar6;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      bVar9 = CONCAT71(uStack_e7,local_e8) != 0;
      if ((local_e0 != '\0') && (CONCAT71(uStack_e7,local_e8) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (dVar11 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (CONCAT71(uStack_c7,local_c8) != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar9) goto LAB_0006cffa;
  (**(code **)(*this_ptr + 0x948))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  FUN_00d23310();
  dVar11 = local_50;
  local_a0 = local_48[0];
  pcVar6 = &local_a0;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (dVar11 != 0.0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_013dfcb0();
  lVar7 = local_78;
  if (local_78 == 0) {
    local_54 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    lVar7 = 0;
  }
  else {
    if (local_70 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_70 == '\0') || (local_78 == 0)) goto LAB_0006cbe1;
      FUN_00d50b20();
    }
    else {
      local_70 = '\0';
    }
    local_54 = 0;
  }
LAB_0006cbe1:
  if ((local_a0 != '\0') && (dVar11 != 0.0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_90 = lVar7;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if (local_78 == 0) {
    local_a8 = 0;
    lVar7 = 0;
    bVar9 = false;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd790();
    FUN_00d23310();
    dVar11 = local_50;
    local_e8 = local_48[0];
    pcVar6 = &local_e8;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (dVar11 != 0.0)) {
      FUN_00d50b20();
    }
    if (dVar11 == 0.0) {
      bVar9 = false;
      lVar7 = 0;
      local_a8 = 0;
    }
    else {
      local_b0 = dVar11;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      FUN_00d23310();
      dVar11 = local_50;
      pcVar6 = &local_c8;
      pcVar8 = local_48;
      if (local_48[0] == '\0') {
        pcVar8 = pcVar6;
      }
      local_c8 = local_48[0];
      *pcVar8 = '\0';
      if ((local_48[0] != '\0') && (dVar11 != 0.0)) {
        FUN_00d50b20();
      }
      param_1 = (void*)pcVar6;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_011ef8d0();
      lVar7 = local_68;
      if (local_68 == 0) {
        local_a8 = 0;
        lVar7 = 0;
LAB_0006ce27:
        bVar9 = lVar7 != 0;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_60 == '\0') {
          uVar5 = FUN_00d50b00();
          local_a8 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          goto LAB_0006ce27;
        }
        local_60 = '\0';
        bVar9 = true;
        local_a8 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      }
      if ((local_c8 != '\0') && (dVar11 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
        FUN_00d50b20();
      }
      if (local_e8 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (bVar9) {
    local_b8 = (double)this_ptr[0x2e];
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b0 = (double)FUN_0125a280();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd710();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_013de8d0();
    if ((local_48[0] != '\0') && (local_50 != 0.0)) {
      FUN_00d50b20();
    }
    local_b8 = (local_b8 + local_b0) - dVar11;
  }
  lVar2 = local_90;
  if (((char)local_a8 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_54 == '\0' && lVar2 != 0) {
    FUN_00d50b20();
  }
LAB_0006cffa:
  if (this_ptr[0x33] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = (int64_t *)this_ptr[0x33];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x398))();
    FUN_00d50b20();
    if (cVar3 == '\0') {
      plVar1 = (int64_t *)this_ptr[0x33];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x3a8))(local_b8);
      FUN_00d50b20();
      (**(code **)(*this_ptr + 0x620))();
    }
  }
  return;
}



// ============================================================
// 0006b020
// ============================================================
// Function: FUN_0006b020
// Address: 0006b020
// Size: 2257 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0006b020(void* param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  void *pvVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t *this_ptr;
  char *pcVar8;
  bool bVar9;
  double dVar10;
  char local_e8;
  undefined7 uStack_e7;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  double local_c8;
  char local_c0;
  undefined7 uStack_bf;
  char local_b8;
  double local_b0;
  uint64_t local_a8;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_54;
  double local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)((int64_t)this_ptr + 0x18a) == '\0') {
    return;
  }
  (**(code **)(*this_ptr + 0x948))();
  if (local_50 == 0.0) {
    bVar2 = false;
    bVar9 = false;
  }
  else if (this_ptr[0x33] == 0) {
    bVar2 = false;
    bVar9 = false;
  }
  else {
    FUN_00d50b00();
    bVar2 = true;
    bVar9 = true;
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (bVar9 = bVar2, local_50 != 0.0)) {
    FUN_00d50b20();
  }
  if (!bVar9) {
    return;
  }
  plVar1 = (int64_t *)this_ptr[0x33];
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_c8 = (double)(**(code **)(*plVar1 + 0x3b0))();
  FUN_00d50b20();
  (**(code **)(*this_ptr + 0x948))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  if (local_78 == 0) {
    bVar9 = false;
  }
  else {
    (**(code **)(*this_ptr + 0x948))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01327a50();
    FUN_00d23310();
    dVar10 = local_50;
    local_40[0] = local_48[0];
    pcVar6 = local_40;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0.0)) {
      FUN_00d50b20();
    }
    if (dVar10 == 0.0) {
      bVar9 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x948))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01327a50();
      FUN_00d23310();
      dVar10 = local_50;
      pcVar6 = local_38;
      pcVar8 = local_48;
      if (local_48[0] == '\0') {
        pcVar8 = pcVar6;
      }
      local_38[0] = local_48[0];
      *pcVar8 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0.0)) {
        FUN_00d50b20();
      }
      param_1 = (void*)pcVar6;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      bVar9 = CONCAT71(uStack_e7,local_e8) != 0;
      if ((local_e0 != '\0') && (CONCAT71(uStack_e7,local_e8) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (dVar10 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (CONCAT71(uStack_bf,local_c0) != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar9) goto LAB_0006b8bc;
  (**(code **)(*this_ptr + 0x948))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  FUN_00d23310();
  dVar10 = local_50;
  local_a0 = local_48[0];
  pcVar6 = &local_a0;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (dVar10 != 0.0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_013dfcb0();
  lVar7 = local_78;
  if (local_78 == 0) {
    local_54 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    lVar7 = 0;
  }
  else {
    if (local_70 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_70 == '\0') || (local_78 == 0)) goto LAB_0006b4bc;
      FUN_00d50b20();
    }
    else {
      local_70 = '\0';
    }
    local_54 = 0;
  }
LAB_0006b4bc:
  if ((local_a0 != '\0') && (dVar10 != 0.0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_90 = lVar7;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if (local_78 == 0) {
    lVar7 = 0;
    local_a8 = 0;
    bVar9 = false;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd790();
    FUN_00d23310();
    dVar10 = local_50;
    local_e8 = local_48[0];
    pcVar6 = &local_e8;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (dVar10 != 0.0)) {
      FUN_00d50b20();
    }
    if (dVar10 == 0.0) {
      bVar9 = false;
      local_a8 = 0;
      lVar7 = 0;
    }
    else {
      local_b0 = dVar10;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      FUN_00d23310();
      dVar10 = local_50;
      pcVar6 = &local_c0;
      pcVar8 = local_48;
      if (local_48[0] == '\0') {
        pcVar8 = pcVar6;
      }
      local_c0 = local_48[0];
      *pcVar8 = '\0';
      if ((local_48[0] != '\0') && (dVar10 != 0.0)) {
        FUN_00d50b20();
      }
      param_1 = (void*)pcVar6;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_011ef8d0();
      lVar7 = local_68;
      if (local_68 == 0) {
        lVar7 = 0;
        local_a8 = 0;
LAB_0006b6f4:
        bVar9 = lVar7 != 0;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_60 == '\0') {
          uVar5 = FUN_00d50b00();
          local_a8 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          goto LAB_0006b6f4;
        }
        local_60 = '\0';
        bVar9 = true;
        local_a8 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      }
      if ((local_c0 != '\0') && (dVar10 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
        FUN_00d50b20();
      }
      if (local_e8 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (bVar9) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b0 = (double)FUN_0125a280();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd710();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_013de8d0();
    if ((local_48[0] != '\0') && (local_50 != 0.0)) {
      FUN_00d50b20();
    }
    local_c8 = (local_c8 - local_b0) + dVar10;
  }
  lVar3 = local_90;
  if (((char)local_a8 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_54 == '\0' && lVar3 != 0) {
    FUN_00d50b20();
  }
LAB_0006b8bc:
  if ((local_c8 != (double)this_ptr[0x2e]) || (NAN(local_c8) || NAN((double)this_ptr[0x2e]))) {
    (**(code **)(*this_ptr + 0x980))();
  }
  return;
}



// ============================================================
// 00701620
// ============================================================
// Function: FUN_00701620
// Address: 00701620
// Size: 881 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_00701620(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  char cVar7;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t **pplVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint64_t extraout_XMM0_Qb_07;
  uint8_t auVar11 [16];
  float fVar12;
  uint32_t uVar13;
  float fVar14;
  uint32_t uVar15;
  uint32_t in_XMM1_Dc;
  float fVar16;
  uint32_t in_XMM1_Dd;
  float fVar17;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  uint64_t uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint64_t local_48;
  uint64_t uStack_40;
  uint8_t local_38 [8];
  uint64_t uStack_30;
  
  uVar15 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar13 = (uint32_t)param_2;
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (unaff_ESI == 0) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bf0f50();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar2 = *(int64_t **)(this_ptr + 0x10);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_48 = (**(code **)(*plVar2 + 0x4d8))();
    local_58 = (float)uVar13;
    fStack_54 = (float)uVar15;
    fStack_50 = (float)in_XMM1_Dc;
    fStack_4c = (float)in_XMM1_Dd;
    FUN_00d50b20();
    plVar2 = *(int64_t **)(this_ptr + 0x10);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38 = (uint8_t  [8])(**(code **)(*plVar2 + 0x528))();
    uStack_30 = extraout_XMM0_Qb;
    FUN_00d50b20();
    auVar19._4_4_ = fStack_54;
    auVar19._0_4_ = local_58;
    auVar19._8_4_ = fStack_50;
    auVar19._12_4_ = fStack_4c;
    _local_38 = blendps(_local_38,auVar19,2);
    plVar2 = *(int64_t **)(this_ptr + 0x10);
  }
  else {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bf0f50();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar2 = *(int64_t **)(this_ptr + 0x10);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_48 = (**(code **)(*plVar2 + 0x4d8))();
    local_38._4_4_ = uVar15;
    local_38._0_4_ = uVar13;
    uStack_30._0_4_ = (float)in_XMM1_Dc;
    uStack_30._4_4_ = (float)in_XMM1_Dd;
    FUN_00d50b20();
    plVar2 = *(int64_t **)(this_ptr + 0x10);
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  fVar12 = (float)local_38._0_4_;
  fVar14 = (float)local_38._4_4_;
  fVar16 = (float)uStack_30;
  fVar17 = uStack_30._4_4_;
  (**(code **)(*plVar2 + 0x4d0))();
  FUN_00d50b20();
  pplVar8 = &local_78;
  FUN_01e40eb0();
  plVar2 = local_78;
  FUN_000b6330();
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 != '\0') goto LAB_00701702;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_00701702:
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_48 = (**(code **)(*plVar2 + 0x4d8))();
    uVar9 = (**(code **)(*plVar2 + 0x938))();
    local_58 = (float)uVar9;
    fStack_54 = (float)((uint64_t)uVar9 >> 0x20);
    fStack_50 = (float)extraout_XMM0_Qb_00;
    fStack_4c = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    (**(code **)(*plVar2 + 0x938))();
    local_68._0_4_ = fVar12;
    local_68._4_4_ = fVar14;
    uStack_60._0_4_ = fVar16;
    uStack_60._4_4_ = fVar17;
    uVar9 = (**(code **)(*plVar2 + 0x938))();
    (**(code **)(*plVar2 + 0x938))();
    local_88 = (float)uVar9;
    fStack_84 = (float)((uint64_t)uVar9 >> 0x20);
    fStack_80 = (float)extraout_XMM0_Qb_01;
    fStack_7c = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
    auVar18._0_4_ = local_88 + fVar12 + (float)local_38._0_4_;
    auVar18._4_4_ = fStack_84 + fVar14 + (float)local_38._4_4_;
    auVar18._8_4_ = fStack_80 + fVar16 + (float)uStack_30;
    auVar18._12_4_ = fStack_7c + fVar17 + uStack_30._4_4_;
    auVar4._4_4_ = fStack_54 + local_68._4_4_ + (float)local_38._4_4_;
    auVar4._0_4_ = local_58 + (float)local_68 + (float)local_38._0_4_;
    auVar4._8_4_ = fStack_50 + (float)uStack_60 + (float)uStack_30;
    auVar4._12_4_ = fStack_4c + uStack_60._4_4_ + uStack_30._4_4_;
    auVar19 = blendps(auVar18,auVar4,0xd);
    fVar12 = auVar19._0_4_;
    fVar14 = auVar19._4_4_;
    fVar16 = auVar19._8_4_;
    fVar17 = auVar19._12_4_;
    (**(code **)(*plVar2 + 0x4d0))();
    plVar3 = *(int64_t **)(this_ptr + 0x10);
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38 = (uint8_t  [8])(**(code **)(*plVar3 + 0x528))();
    uStack_30 = extraout_XMM0_Qb_02;
    FUN_00d50b20();
    local_48 = (**(code **)(*plVar2 + 0x938))();
    uStack_40 = extraout_XMM0_Qb_03;
    (**(code **)(*plVar2 + 0x938))();
    local_58 = fVar12;
    fStack_54 = fVar14;
    fStack_50 = fVar16;
    fStack_4c = fVar17;
    local_68 = (**(code **)(*plVar2 + 0x938))();
    uStack_60 = extraout_XMM0_Qb_04;
    (**(code **)(*plVar2 + 0x938))();
    auVar10._0_4_ = (float)local_68 + fVar12 + (float)local_38._0_4_;
    auVar10._4_4_ = local_68._4_4_ + fVar14 + (float)local_38._4_4_;
    auVar10._8_4_ = (float)uStack_60 + fVar16 + (float)uStack_30;
    auVar10._12_4_ = uStack_60._4_4_ + fVar17 + uStack_30._4_4_;
    auVar5._4_4_ = local_48._4_4_ + fStack_54 + (float)local_38._4_4_;
    auVar5._0_4_ = (float)local_48 + local_58 + (float)local_38._0_4_;
    auVar5._8_4_ = (float)uStack_40 + fStack_50 + (float)uStack_30;
    auVar5._12_4_ = uStack_40._4_4_ + fStack_4c + uStack_30._4_4_;
    auVar19 = blendps(auVar10,auVar5,0xd);
    FUN_01e4cf40(auVar19._0_8_);
    plVar3 = *(int64_t **)(this_ptr + 0x10);
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38 = (uint8_t  [8])(**(code **)(*plVar3 + 0x530))();
    uStack_30 = extraout_XMM0_Qb_05;
    FUN_00d50b20();
    local_48 = (**(code **)(*plVar2 + 0x938))();
    uStack_40 = extraout_XMM0_Qb_06;
    (**(code **)(*plVar2 + 0x938))();
    local_58 = fVar12;
    fStack_54 = fVar14;
    fStack_50 = fVar16;
    fStack_4c = fVar17;
    local_68 = (**(code **)(*plVar2 + 0x938))();
    uStack_60 = extraout_XMM0_Qb_07;
    (**(code **)(*plVar2 + 0x938))();
    auVar11._0_4_ = (float)local_68 + fVar12 + (float)local_38._0_4_;
    auVar11._4_4_ = local_68._4_4_ + fVar14 + (float)local_38._4_4_;
    auVar11._8_4_ = (float)uStack_60 + fVar16 + (float)uStack_30;
    auVar11._12_4_ = uStack_60._4_4_ + fVar17 + uStack_30._4_4_;
    auVar6._4_4_ = local_48._4_4_ + fStack_54 + (float)local_38._4_4_;
    auVar6._0_4_ = (float)local_48 + local_58 + (float)local_38._0_4_;
    auVar6._8_4_ = (float)uStack_40 + fStack_50 + (float)uStack_30;
    auVar6._12_4_ = uStack_40._4_4_ + fStack_4c + uStack_30._4_4_;
    auVar19 = blendps(auVar11,auVar6,0xd);
    (**(code **)(*plVar2 + 0x9b8))(auVar19._0_8_);
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00702500
// ============================================================
// Function: FUN_00702500
// Address: 00702500
// Size: 1761 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


uint64_t FUN_00702500(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int iVar2;
  uint uVar3;
  void*puVar4;
  int64_t lVar5;
  void *pvVar6;
  char *pcVar7;
  void* pVar8;
  uint64_t uVar9;
  uint32_t unaff_ESI;
  int64_t this_ptr;
  char *pcVar10;
  void*local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  uint32_t local_8c;
  int64_t local_88;
  char local_80 [8];
  int64_t local_78;
  uint64_t local_70;
  int local_68;
  int64_t local_60;
  char local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_8c = unaff_ESI;
  if (*(int64_t *)(this_ptr + 0xa0) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar5 = *(int64_t *)(this_ptr + 0xa0);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    iVar2 = FUN_01c446f0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (iVar2 == 0) {
      uVar9 = 0;
      goto LAB_00702bd6;
    }
  }
  local_a8 = CONCAT44(local_a8._4_4_,param_2);
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x2572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar5 = *(int64_t *)(this_ptr + 0x10);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_002eacb0();
  lVar1 = local_88;
  if (local_80[0] == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    local_80[0] = '\0';
    local_88 = 0;
    local_78 = lVar1;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar2 = -local_70._4_4_;
        }
        else {
          iVar2 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar2);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar2 = 0;
        }
        local_70 = CONCAT44(iVar2,(int)local_70);
      }
      lVar5 = (int64_t)(int)local_70;
      iVar2 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar2);
      if (*(int *)(local_78 + 0xc) <= iVar2) break;
      local_88 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((void*)*(int64_t *)(local_78 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      lVar5 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_58 = '\0';
      local_60 = lVar5;
      FUN_00d214d0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
    }
    lVar5 = local_78;
    FUN_000be170();
    pVar8 = (void*)lVar5;
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)puVar4 + 0xc) == 0) {
    uVar9 = 0;
  }
  else {
    FUN_00d23310();
    lVar5 = local_88;
    local_50 = local_80[0];
    pcVar7 = &local_50;
    if (local_80[0] != '\0') {
      pcVar7 = local_80;
    }
    *pcVar7 = '\0';
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_012ccc80();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_a8 == '\x01' && (char)uVar3 == '\0') {
      FUN_006f3f00();
      local_a8 = local_60;
      FUN_00d23310();
      lVar5 = local_88;
      local_40[0] = local_80[0];
      pcVar7 = local_40;
      if (local_80[0] != '\0') {
        pcVar7 = local_80;
      }
      *pcVar7 = '\0';
      if ((local_80[0] != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01267000();
      local_b0 = 0;
      local_b8 = CONCAT71(uStack_4f,local_50);
      local_e8 = puVar4;
      if (local_48 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
        if ((char)local_8c != '\0') goto LAB_0070296f;
LAB_00702a12:
        local_b0 = '\x01';
        local_e0 = '\0';
        local_c0 = '\0';
        local_c8 = 0;
        local_a0 = 0;
      }
      else {
        local_48 = '\0';
        if ((char)local_8c == '\0') goto LAB_00702a12;
LAB_0070296f:
        local_b0 = '\x01';
        local_e0 = '\0';
        FUN_00d23310();
        this_ptr = local_88;
        pcVar7 = local_38;
        pcVar10 = local_80;
        if (local_80[0] == '\0') {
          pcVar10 = pcVar7;
        }
        local_38[0] = local_80[0];
        *pcVar10 = '\0';
        if ((local_80[0] != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        pVar8 = (void*)pcVar7;
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01267000();
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        local_a0 = local_c8;
        local_98 = 0;
        if (local_c0 == '\0') {
          if (local_c8 == 0) {
            local_a0 = 0;
          }
          else {
            FUN_00d50b00();
          }
        }
        else {
          local_c0 = '\0';
        }
      }
      lVar1 = local_a8;
      local_98 = '\x01';
      FUN_0076fba0(1,&local_e8,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_8c != '\0') {
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (this_ptr != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      uVar9 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
    }
    else {
      uVar9 = (uint64_t)uVar3 ^ 1;
    }
  }
  FUN_00d50b20();
LAB_00702bd6:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 002ec210
// ============================================================
// Function: FUN_002ec210
// Address: 002ec210
// Size: 1797 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
//   "MUMultiTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


uint64_t FUN_002ec210(uint64_t param_1,byte param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int64_t **pplVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  byte bVar9;
  int64_t *plVar10;
  int64_t lVar11;
  uint32_t uVar12;
  int64_t local_d0;
  char local_c8;
  int64_t local_a0;
  char local_98;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  uint32_t local_48;
  byte local_39;
  char local_38 [8];
  
  FUN_01f27fe0();
  uVar3 = (**(code **)(*local_68 + 0x450))();
  plVar10 = (int64_t *)(uint64_t)uVar3;
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar9 = (byte)uVar3;
  if ((bVar9 & param_2) == 0) goto LAB_002ec775;
  (**(code **)(*this_ptr + 0x9a0))();
  pplVar7 = &local_68;
  FUN_01eda0f0();
  plVar1 = local_68;
  if ((g_026fe4e0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d7a88 = FUN_00d4fe50();
    g_026d7a70 = "MUMultiTrackItem";
    g_026d7a78 = 0x60;
    g_026d7a80 = FUN_0006eae0;
    g_026d7a90 = 0;
    ram_00000000026d7a98 = 0;
    g_026d7aa0 = 0;
    g_026d7b18 = 0;
    ram_00000000026d7b20 = 0;
    g_026d7b28 = 0;
    g_026d7b2a = 1;
    g_026d7aa8 = 0;
    ram_00000000026d7ab0 = 0;
    g_026d7ab8 = 0;
    ram_00000000026d7ac0 = 0;
    g_026d7ac8 = 0;
    ram_00000000026d7ad0 = 0;
    g_026d7ad8 = 0;
    ram_00000000026d7ae0 = 0;
    g_026d7ae8 = 0;
    ram_00000000026d7af0 = 0;
    g_026d7af8 = 0;
    ram_00000000026d7b00 = 0;
    g_026d7b08 = 0;
    ram_00000000026d7b10 = 0;
    g_026d7b33 = 0;
    g_026d7b2b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_002ec2b5:
    pplVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_002ec2b5;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_002ec775;
  FUN_01d3a560();
  plVar8 = local_68;
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    uVar3 = 0;
  }
  else {
    FUN_01d3a560();
    uVar3 = FUN_01d3b590();
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar3 = (uVar3 & 4) >> 2;
  }
  FUN_01d3a560();
  plVar8 = local_68;
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    uVar4 = 0;
  }
  else {
    FUN_01d3a560();
    uVar4 = FUN_01d3b590();
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar4 = (uVar4 & 2) >> 1;
  }
  cVar2 = FUN_01e42170();
  if (cVar2 == '\0') {
    (**(code **)(*(int64_t *)this_ptr[0x4b] + 0x610))();
    FUN_00d23310();
    plVar8 = local_68;
    pcVar6 = local_38;
    if (local_60[0] != '\0') {
      pcVar6 = local_60;
    }
    local_38[0] = local_60[0];
    *pcVar6 = '\0';
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar8 + 0x5d8))();
    FUN_0063f230();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      if ((g_02700970 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026d78f8 = FUN_0006e710();
        g_026d78e0 = "MDAudioTrackItem";
        g_026d78e8 = 0x70;
        g_026d78f0 = FUN_0006e6c0;
        g_026d7900 = 0;
        ram_00000000026d7908 = 0;
        g_026d7910 = 0;
        g_026d7988 = 0;
        ram_00000000026d7990 = 0;
        g_026d7998 = 0;
        g_026d799a = 1;
        g_026d7918 = 0;
        ram_00000000026d7920 = 0;
        g_026d7928 = 0;
        ram_00000000026d7930 = 0;
        g_026d7938 = 0;
        ram_00000000026d7940 = 0;
        g_026d7948 = 0;
        ram_00000000026d7950 = 0;
        g_026d7958 = 0;
        ram_00000000026d7960 = 0;
        g_026d7968 = 0;
        ram_00000000026d7970 = 0;
        g_026d7978 = 0;
        ram_00000000026d7980 = 0;
        g_026d79a3 = 0;
        g_026d799b = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar8 = plVar1;
      if (cVar2 == '\0') {
        plVar8 = g_02802688;
      }
      if (plVar8 != (int64_t *)0x0) {
        uVar12 = FUN_00075b90();
        plVar8 = local_68;
        if (local_60[0] == '\0') {
          if (local_68 != (int64_t *)0x0) {
            uVar12 = FUN_00d50b00();
          }
        }
        else {
          local_60[0] = '\0';
        }
        FUN_0024dae0(uVar12,uVar4);
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0021a630();
        FUN_01e42250();
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  else {
    FUN_01bc09c0();
    plVar8 = local_68;
    if (local_60[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_002ec57c;
      }
    }
    else if (local_68 != (int64_t *)0x0) {
LAB_002ec57c:
      local_60[0] = '\0';
      local_68 = (int64_t *)0x0;
      local_58 = plVar8;
      local_48 = 0;
      local_50 = 0;
      local_39 = bVar9;
      if (0 < *(int *)((int64_t)plVar8 + 0xc)) {
        lVar11 = 0;
        do {
          local_68 = *(int64_t **)(plVar8[2] + lVar11 * 8);
          FUN_01bc0990();
          cVar2 = FUN_00d23d70();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if (cVar2 == '\0') {
            FUN_01bc1970(uVar4,uVar3,0);
          }
          lVar11 = lVar11 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar11);
          plVar10 = plVar1;
        } while ((int)lVar11 < *(int *)((int64_t)plVar8 + 0xc));
      }
      FUN_000840d0();
      FUN_00d50b20();
      plVar10 = (int64_t *)CONCAT71((int7)((uint64_t)plVar10 >> 8),local_39);
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_002ec775:
  return (uint64_t)plVar10 & 0xffffffff;
}



// ============================================================
// 004b2fa0
// ============================================================
// Function: FUN_004b2fa0
// Address: 004b2fa0
// Size: 1893 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_004b2fa0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Dc;
  uint32_t uVar11;
  uint64_t in_XMM3_Qa;
  int64_t local_c8;
  char local_c0;
  int64_t *local_40;
  char local_38;
  
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 != 1) || (iVar4 = FUN_01d3b630(), iVar4 != 1)) {
    FUN_01be6360();
    return;
  }
  uVar5 = FUN_01d3b590();
  uVar6 = FUN_01d3b590();
  FUN_01be4ec0();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar3 = FUN_01e420b0();
  if (cVar3 == '\0') {
    FUN_01e42250();
    cVar3 = FUN_01e42170();
    if (cVar3 == '\0') {
      FUN_01e42030();
      FUN_01d8cd90();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  iVar4 = FUN_01d3b620();
  if (iVar4 != 2) {
    uVar8 = FUN_01d3abf0();
    uVar11 = 0;
    uVar9 = FUN_00d05530(uVar8,0,g_023908d8);
    uVar8 = uVar9;
LAB_004b32c0:
    do {
      do {
        do {
          (**(code **)(*this_ptr + 0x658))(uVar8);
          plVar2 = (int64_t *)*arg1;
          if (plVar2 == local_40) {
            if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_004b3372;
            plVar7 = plVar2;
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_004b336d;
            }
LAB_004b3325:
            *(void*)(arg1 + 1) = 1;
          }
          else {
            lVar1 = arg1[1];
            if (local_38 != '\0') {
              *arg1 = (int64_t)local_40;
              plVar7 = local_40;
              if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar7 = (int64_t *)*arg1;
              }
              goto LAB_004b3325;
            }
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (int64_t)local_40;
            if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_004b336d:
            *(void*)(arg1 + 1) = 1;
LAB_004b3372:
            plVar7 = (int64_t *)*arg1;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (plVar7 == (int64_t *)0x0) goto LAB_004b357d;
          iVar4 = FUN_01d3a5a0();
          if (iVar4 == 6) {
            FUN_01bc08b0();
            FUN_01be4ec0();
            lVar1 = this_ptr[0x27];
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            FUN_01bef350((uVar6 & 2) >> 1,(uVar5 & 4) >> 2,0);
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_004b357d;
          }
          iVar4 = FUN_01d3a5a0();
          uVar8 = extraout_XMM0_Da;
        } while (iVar4 != 5);
        uVar8 = FUN_01d3abf0();
        cVar3 = FUN_00d05410(uVar8,uVar9,uVar11,in_XMM3_Qa,uVar8,extraout_XMM0_Dc);
      } while (cVar3 != '\0');
      uVar10 = FUN_01e466c0();
      uVar8 = (**(code **)(*this_ptr + 0x658))();
      plVar2 = (int64_t *)*arg1;
      if (plVar2 == local_40) {
        if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
          if (local_38 == '\0') {
            uVar8 = FUN_00d50b00();
            goto LAB_004b34c2;
          }
          goto LAB_004b3458;
        }
LAB_004b3461:
        lVar1 = *arg1;
      }
      else {
        lVar1 = arg1[1];
        if (local_38 != '\0') {
          *arg1 = (int64_t)local_40;
          if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
            uVar8 = FUN_00d50b20();
          }
LAB_004b3458:
          *(void*)(arg1 + 1) = 1;
          local_38 = '\0';
          goto LAB_004b3461;
        }
        if (local_40 != (int64_t *)0x0) {
          uVar8 = FUN_00d50b00();
        }
        *arg1 = (int64_t)local_40;
        if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
LAB_004b34c2:
        *(void*)(arg1 + 1) = 1;
        lVar1 = *arg1;
      }
      if (lVar1 == 0) {
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        goto LAB_004b32c0;
      }
      iVar4 = FUN_01d3a5a0();
      uVar8 = extraout_XMM0_Da_00;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
    } while (iVar4 != 5);
    FUN_01be8270();
    FUN_01be8270();
    FUN_00d50b00();
    FUN_01e437f0(uVar10);
    (**(code **)(*local_40 + 0x928))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_004b357d;
  }
  FUN_01be4ec0();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = this_ptr[0x27];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01bef350((uVar6 & 2) >> 1,(uVar5 & 4) >> 2,1);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar7 = this_ptr + 0x27;
  plVar2 = (int64_t *)*plVar7;
  if ((g_02700970 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d78f8 = FUN_0006e710();
    g_026d78e0 = "MDAudioTrackItem";
    g_026d78e8 = 0x70;
    g_026d78f0 = FUN_0006e6c0;
    g_026d7900 = 0;
    ram_00000000026d7908 = 0;
    g_026d7910 = 0;
    g_026d7988 = 0;
    ram_00000000026d7990 = 0;
    g_026d7998 = 0;
    g_026d799a = 1;
    g_026d7918 = 0;
    ram_00000000026d7920 = 0;
    g_026d7928 = 0;
    ram_00000000026d7930 = 0;
    g_026d7938 = 0;
    ram_00000000026d7940 = 0;
    g_026d7948 = 0;
    ram_00000000026d7950 = 0;
    g_026d7958 = 0;
    ram_00000000026d7960 = 0;
    g_026d7968 = 0;
    ram_00000000026d7970 = 0;
    g_026d7978 = 0;
    ram_00000000026d7980 = 0;
    g_026d79a3 = 0;
    g_026d799b = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_004b319c:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004b319c;
  }
  if (*plVar7 != 0) {
    FUN_00d50b00();
    FUN_00075b90();
    if (local_40 != (int64_t *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      FUN_002ecd30();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_004b357d:
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002ea230
// ============================================================
// Function: FUN_002ea230
// Address: 002ea230
// Size: 1527 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_002ea230(void)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int iVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *local_88;
  char local_80;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  FUN_01beea30();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002ea2c7;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_002ea2c7:
    local_60 = '\0';
    local_68 = (int64_t *)0x0;
    local_58 = plVar1;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar6 = -local_50._4_4_;
        }
        else {
          iVar6 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar6 = 0;
        }
        local_50 = CONCAT44(iVar6,(int)local_50);
      }
      lVar4 = (int64_t)(int)local_50;
      iVar6 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar6);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar6) break;
      plVar1 = *(int64_t **)(local_58[2] + 8 + lVar4 * 8);
      local_68 = plVar1;
      if ((g_02700970 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026d78f8 = FUN_0006e710();
        g_026d78e0 = "MDAudioTrackItem";
        g_026d78e8 = 0x70;
        g_026d78f0 = FUN_0006e6c0;
        g_026d7900 = 0;
        ram_00000000026d7908 = 0;
        g_026d7910 = 0;
        g_026d7988 = 0;
        ram_00000000026d7990 = 0;
        g_026d7998 = 0;
        g_026d799a = 1;
        g_026d7918 = 0;
        ram_00000000026d7920 = 0;
        g_026d7928 = 0;
        ram_00000000026d7930 = 0;
        g_026d7938 = 0;
        ram_00000000026d7940 = 0;
        g_026d7948 = 0;
        ram_00000000026d7950 = 0;
        g_026d7958 = 0;
        ram_00000000026d7960 = 0;
        g_026d7968 = 0;
        ram_00000000026d7970 = 0;
        g_026d7978 = 0;
        ram_00000000026d7980 = 0;
        g_026d79a3 = 0;
        g_026d799b = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_68;
        if (cVar2 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar5 == (int64_t *)0x0) {
        local_40 = local_68;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  FUN_01bf2670();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_002ea7b7;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (int64_t *)0x0) goto LAB_002ea7b7;
  local_60 = '\0';
  local_68 = (int64_t *)0x0;
  local_58 = plVar1;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_50._4_4_ = 0;
  while( true ) {
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        iVar6 = -local_50._4_4_;
      }
      else {
        iVar6 = (int)local_50 - local_50._4_4_;
        local_50 = CONCAT44(local_50._4_4_,iVar6);
        FUN_00d23690();
        local_48 = local_48 + local_50._4_4_;
        iVar6 = 0;
      }
      local_50 = CONCAT44(iVar6,(int)local_50);
    }
    lVar4 = (int64_t)(int)local_50;
    iVar6 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar6);
    if (*(int *)((int64_t)local_58 + 0xc) <= iVar6) break;
    plVar1 = *(int64_t **)(local_58[2] + 8 + lVar4 * 8);
    local_68 = plVar1;
    if ((g_02700970 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      g_026d78f8 = FUN_0006e710();
      g_026d78e0 = "MDAudioTrackItem";
      g_026d78e8 = 0x70;
      g_026d78f0 = FUN_0006e6c0;
      g_026d7900 = 0;
      ram_00000000026d7908 = 0;
      g_026d7910 = 0;
      g_026d7988 = 0;
      ram_00000000026d7990 = 0;
      g_026d7998 = 0;
      g_026d799a = 1;
      g_026d7918 = 0;
      ram_00000000026d7920 = 0;
      g_026d7928 = 0;
      ram_00000000026d7930 = 0;
      g_026d7938 = 0;
      ram_00000000026d7940 = 0;
      g_026d7948 = 0;
      ram_00000000026d7950 = 0;
      g_026d7958 = 0;
      ram_00000000026d7960 = 0;
      g_026d7968 = 0;
      ram_00000000026d7970 = 0;
      g_026d7978 = 0;
      ram_00000000026d7980 = 0;
      g_026d79a3 = 0;
      g_026d799b = 0;
      ___cxa_guard_release();
    }
    pplVar5 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar5 = &local_68;
      if (cVar2 == '\0') {
        pplVar5 = (int64_t **)&g_02802688;
      }
    }
    if (*pplVar5 != (int64_t *)0x0) {
      FUN_00075b90();
      plVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        if (*arg1 != 0) {
          FUN_00075b90();
          if (local_80 == '\0') {
            if (local_88 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          local_40 = local_88;
          local_38 = '\0';
          cVar2 = FUN_00d23d70();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            local_40 = local_68;
            local_38 = '\0';
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_002ea548;
          }
        }
        FUN_01bc08b0();
      }
    }
LAB_002ea548:
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_002ea7b7:
  FUN_01bee990();
  if (*(int64_t *)(this_ptr + 0x2e8) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar4 = *(int64_t *)(this_ptr + 0x2e8);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_00443760();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002eb960
// ============================================================
// Function: FUN_002eb960
// Address: 002eb960
// Size: 1436 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_002eb960(uint64_t param_1,double param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t *this_ptr;
  int64_t *plVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  int64_t lVar8;
  double dVar9;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_d8;
  char local_d0;
  int64_t local_c0;
  char local_b8;
  double local_b0;
  double local_a8;
  int64_t *local_a0;
  char local_98;
  double local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  uint64_t local_70;
  int local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  FUN_01beab60();
  if (local_60 == (int64_t *)0x0) {
    bVar5 = true;
  }
  else {
    FUN_01beab60();
    FUN_01d97e80();
    FUN_00d3ecf0();
    bVar5 = local_88 != local_100;
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    return;
  }
  FUN_01be8230();
  FUN_01a3c5a0();
  plVar4 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        (**(code **)(*local_60 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar4 == (int64_t *)0x0) || (cVar2 = (**(code **)(*plVar4 + 0xb0))(), cVar2 == '\0')) {
    FUN_01beead0();
    plVar1 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (int64_t *)0x0) goto LAB_002ebf0a;
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_60 == (int64_t *)0x0) goto LAB_002ebf0a;
    local_38 = plVar4;
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = plVar1;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_90 = 0.0;
    local_48._4_4_ = 0;
    local_a8 = 0.0;
    bVar5 = false;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar3 = -local_48._4_4_;
        }
        else {
          iVar3 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar3);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar3 = 0;
        }
        local_48 = CONCAT44(iVar3,(int)local_48);
      }
      lVar8 = (int64_t)(int)local_48;
      iVar3 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar3);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar3) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar8 * 8);
      FUN_01bc09c0();
      lVar8 = local_88;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_002ebc50;
        }
      }
      else if (local_88 != 0) {
LAB_002ebc50:
        local_80 = '\0';
        local_88 = 0;
        local_78 = lVar8;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        while( true ) {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar3 = -local_70._4_4_;
            }
            else {
              iVar3 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar3);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar3 = 0;
            }
            local_70 = CONCAT44(iVar3,(int)local_70);
          }
          lVar8 = (int64_t)(int)local_70;
          iVar3 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar3);
          if (*(int *)(local_78 + 0xc) <= iVar3) break;
          local_88 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + 8 + lVar8 * 8);
          if (bVar5) {
            local_b0 = (double)FUN_01bc6390();
            dVar6 = (double)FUN_01bc6380();
            dVar7 = (double)FUN_01bc6390();
            dVar9 = local_b0 + dVar6;
            if (local_b0 + dVar6 <= local_a8) {
              dVar9 = local_a8;
            }
            param_2 = local_90;
            if (dVar7 < local_90) {
              local_b0 = dVar9;
              dVar6 = (double)FUN_01bc6390();
              param_2 = local_90;
              dVar9 = local_b0;
              local_90 = dVar6;
            }
          }
          else {
            local_90 = (double)FUN_01bc6390();
            dVar9 = (double)FUN_01bc6380();
            bVar5 = true;
            dVar9 = dVar9 + local_90;
          }
          local_a8 = dVar9;
        }
        FUN_000840d0();
        FUN_00d50b20();
      }
    }
    FUN_002e0650();
    FUN_00d50b20();
    plVar4 = local_38;
    if (!bVar5) goto LAB_002ebf0a;
  }
  else {
    local_90 = (double)(**(code **)(*plVar4 + 0xc0))();
    local_a8 = (double)(**(code **)(*plVar4 + 0xd0))();
  }
  *(void*)(this_ptr + 0x53) = 0;
  lVar8 = FUN_01bf1090();
  this_ptr[0x4f] = lVar8;
  this_ptr[0x50] = (int64_t)param_2;
  dVar9 = (local_a8 - local_90) + g_023b1e98;
  lVar8 = FUN_00e7b500(local_90 + g_023b1e90);
  this_ptr[0x51] = lVar8;
  this_ptr[0x52] = (int64_t)dVar9;
  FUN_00d46dc0(g_02390124);
  local_a0 = local_60;
  local_98 = 0;
  local_c0 = g_026fe3d0;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_c0 = g_026fe3d0;
    }
  }
  else {
    local_58 = '\0';
  }
  local_98 = '\x01';
  g_026fe3d0 = local_c0;
  if (local_c0 != 0) {
    local_98 = '\x01';
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  (**(code **)(*this_ptr + 0x408))(&local_c0,&local_a0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_002ebf0a:
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00703ff0
// ============================================================
// Function: FUN_00703ff0
// Address: 00703ff0
// Size: 1978 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


uint32_t FUN_00703ff0(void* param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  char cVar4;
  uint32_t uVar5;
  void *pvVar6;
  int64_t *plVar7;
  int64_t **pplVar8;
  int64_t *this_ptr;
  bool bVar9;
  int64_t *local_138;
  char local_130;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  uint64_t local_a0;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x5d8))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00704053;
    }
LAB_007040c7:
    bVar3 = true;
    lVar1 = this_ptr[2];
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_007040c7;
LAB_00704053:
    FUN_0063f230();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      bVar3 = false;
      lVar1 = this_ptr[2];
    }
    else {
      FUN_0063f230();
      cVar4 = FUN_00212c70();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = false;
      uVar5 = 0;
      if (cVar4 != '\0') goto LAB_00704788;
      lVar1 = this_ptr[2];
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01beead0();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_007035b0();
  plVar2 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)plVar2 + 0xc) == 0) {
LAB_0070421b:
    uVar5 = 0;
  }
  else {
    FUN_01266770();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (plVar2 == (int64_t *)0x0) goto LAB_0070421b;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      uVar5 = 0;
    }
    else {
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_40 + 0x450))();
      if (cVar4 == '\0') {
        FUN_006f3f00();
        bVar9 = local_60 != 0;
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar9 = false;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar9) {
        FUN_006f3f00();
        plVar2 = local_40;
        FUN_00751ba0();
        FUN_01c93080();
        if ((local_38 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_a0 = FUN_00e7bdb0();
      lVar1 = this_ptr[2];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pplVar8 = &local_40;
      FUN_01be8160();
      plVar2 = local_40;
      FUN_00083c20();
      if (plVar2 == (int64_t *)0x0) {
        pplVar8 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar2 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = this_ptr[0x11];
      plVar7 = (int64_t *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        plVar7 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
      }
      if (plVar2 == (int64_t *)0x0) {
        if (param_2 != '\0') {
          FUN_01266200();
          (**(code **)(*plVar7 + 0x60))();
        }
      }
      else if (param_2 != '\0') {
        local_a0 = FUN_01ca2090();
        FUN_006f3f00();
        (**(code **)(*local_138 + 0x628))();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313b00();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505900();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c98e0();
        (**(code **)(*plVar7 + 0x60))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if (local_130 != '\0') {
          FUN_00d50b20();
        }
      }
      FUN_006f3f00();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_0064dbb0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar5 = FUN_01c936e0(param_2,local_a0);
      if (lVar1 != 0) {
        (**(code **)(*plVar7 + 0x10))();
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00704788:
  if (!bVar3) {
    FUN_00d50b20();
  }
  return uVar5;
}



// ============================================================
// 007035b0
// ============================================================
// Function: FUN_007035b0
// Address: 007035b0
// Size: 1147 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void* FUN_007035b0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  void*puVar8;
  void *pvVar9;
  void* pVar10;
  int64_t **pplVar11;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar12;
  int local_68;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_68 = -1;
    while( true ) {
      lVar7 = (int64_t)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_68) break;
      plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar7 * 8);
      local_40 = plVar2;
      if ((g_02700970 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026d78f8 = FUN_0006e710();
        g_026d78e0 = "MDAudioTrackItem";
        g_026d78e8 = 0x70;
        g_026d78f0 = FUN_0006e6c0;
        g_026d7900 = 0;
        ram_00000000026d7908 = 0;
        g_026d7910 = 0;
        g_026d7988 = 0;
        ram_00000000026d7990 = 0;
        g_026d7998 = 0;
        g_026d799a = 1;
        g_026d7918 = 0;
        ram_00000000026d7920 = 0;
        g_026d7928 = 0;
        ram_00000000026d7930 = 0;
        g_026d7938 = 0;
        ram_00000000026d7940 = 0;
        g_026d7948 = 0;
        ram_00000000026d7950 = 0;
        g_026d7958 = 0;
        ram_00000000026d7960 = 0;
        g_026d7968 = 0;
        ram_00000000026d7970 = 0;
        g_026d7978 = 0;
        ram_00000000026d7980 = 0;
        g_026d79a3 = 0;
        g_026d799b = 0;
        ___cxa_guard_release();
      }
      pplVar11 = (int64_t **)&g_02802688;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar11 = &local_40;
        if (cVar4 == '\0') {
          pplVar11 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar11 != (int64_t *)0x0) {
        uVar12 = FUN_01bc0990();
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            uVar12 = FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_40 = local_50;
        local_38 = '\0';
        FUN_00d214d0(uVar12,*(void*)((int64_t)puVar6 + 0xc));
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_0038d380();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*pcVar3)();
  if (puVar6 == (void*)0x0) {
    *this_ptr = puVar8;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    if (0 < *(int *)((int64_t)puVar6 + 0xc)) {
      iVar5 = 0;
      do {
        FUN_01bc60e0();
        plVar2 = local_40;
        FUN_000823a0();
        pplVar11 = (int64_t **)&g_02802688;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar11 = &local_40;
          if (cVar4 == '\0') {
            pplVar11 = (int64_t **)&g_02802688;
          }
        }
        plVar2 = *pplVar11;
        if (*(char *)(pplVar11 + 1) == '\0') {
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar11 + 1) = 0;
        }
        pVar10 = (void*)pplVar11;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          pvVar9 = _pthread_getspecific(pVar10);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar12 = FUN_012e5ae0();
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              uVar12 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_40 = local_50;
          local_38 = '\0';
          FUN_00d214d0(uVar12,*(void*)((int64_t)puVar8 + 0xc));
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((int64_t)puVar6 + 0xc));
    }
    FUN_000840d0();
    *this_ptr = puVar8;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0006a130
// ============================================================
// Function: FUN_0006a130
// Address: 0006a130
// Size: 812 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0006a130(void* param_1)

{
  char cVar1;
  int iVar2;
  int64_t **pplVar3;
  void *pvVar4;
  char *pcVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30 [8];
  char local_28 [8];
  
  local_40 = '\0';
  local_48 = (int64_t *)0x0;
  FUN_01f27fe0();
  (**(code **)(*local_58 + 0x660))();
  plVar8 = local_38;
  if (local_38 == (int64_t *)0x0) {
    plVar8 = (int64_t *)0x0;
  }
  else if (local_30[0] == '\0') {
    FUN_00d50b00();
    local_48 = plVar8;
    local_40 = '\x01';
    if ((local_30[0] != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = local_38;
    local_40 = '\x01';
    local_30[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0006e1c0();
  if (plVar8 == (int64_t *)0x0) {
LAB_0006a1e5:
    pplVar3 = &g_02802688;
    plVar7 = g_02802688;
    if (g_02802688 != (int64_t *)0x0) goto LAB_0006a1f4;
LAB_0006a218:
    if ((g_02700970 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_026d78f8 = FUN_0006e710();
      g_026d78e0 = "MDAudioTrackItem";
      g_026d78e8 = 0x70;
      param_1 = 0x6e6c0;
      g_026d78f0 = FUN_0006e6c0;
      g_026d7900 = 0;
      ram_00000000026d7908 = 0;
      g_026d7910 = 0;
      g_026d7988 = 0;
      ram_00000000026d7990 = 0;
      g_026d7998 = 0;
      g_026d799a = 1;
      g_026d7918 = 0;
      ram_00000000026d7920 = 0;
      g_026d7928 = 0;
      ram_00000000026d7930 = 0;
      g_026d7938 = 0;
      ram_00000000026d7940 = 0;
      g_026d7948 = 0;
      ram_00000000026d7950 = 0;
      g_026d7958 = 0;
      ram_00000000026d7960 = 0;
      g_026d7968 = 0;
      ram_00000000026d7970 = 0;
      g_026d7978 = 0;
      ram_00000000026d7980 = 0;
      g_026d79a3 = 0;
      g_026d799b = 0;
      ___cxa_guard_release();
    }
    plVar7 = g_02802688;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar7 = g_02802688;
      if (cVar1 != '\0') {
        plVar7 = local_48;
      }
    }
    if (plVar7 == (int64_t *)0x0) goto LAB_0006a377;
    FUN_00075b90();
    if (local_30[0] == '\0') {
      if (local_38 == (int64_t *)0x0) goto LAB_0006a377;
      FUN_00d50b00();
      if ((local_30[0] != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == (int64_t *)0x0) goto LAB_0006a377;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    pcVar5 = local_28;
    if (local_30[0] != '\0') {
      pcVar5 = local_30;
    }
    local_28[0] = local_30[0];
    *pcVar5 = '\0';
    if ((local_30[0] != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 == (int64_t *)0x0) {
      cVar6 = '\0';
      cVar1 = '\0';
      plVar7 = (int64_t *)0x0;
    }
    else {
      cVar6 = '\x01';
      cVar1 = '\x01';
      plVar7 = local_38;
      if (local_28[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_50 != '\0') && (cVar1 = cVar6, local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0006a1e5;
    pplVar3 = &local_48;
    plVar7 = local_48;
    if (local_48 == (int64_t *)0x0) goto LAB_0006a218;
LAB_0006a1f4:
    cVar1 = *(char *)(pplVar3 + 1);
    if (cVar1 != '\0') {
      FUN_00d50b00();
    }
  }
  if ((cVar1 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0006a377:
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002e9d80
// ============================================================
// Function: FUN_002e9d80
// Address: 002e9d80
// Size: 840 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_002e9d80(void)

{
  int64_t *plVar1;
  code *pcVar2;
  char cVar3;
  void*puVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t **pplVar7;
  int iVar8;
  int64_t *arg1;
  uint32_t uVar9;
  int64_t *local_80;
  uint8_t local_78;
  int64_t local_70;
  uint64_t local_68;
  int local_60;
  int64_t *local_58;
  char local_50;
  void*local_48;
  int64_t *local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  local_48 = puVar5;
  if (*arg1 != 0) {
    local_78 = 0;
    local_80 = (int64_t *)0x0;
    local_70 = *arg1;
    local_68 = 0xffffffff;
    local_60 = 0;
    while( true ) {
      lVar6 = (int64_t)(int)local_68;
      iVar8 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar8);
      if (*(int *)(local_70 + 0xc) <= iVar8) break;
      plVar1 = *(int64_t **)(*(int64_t *)(local_70 + 0x10) + 8 + lVar6 * 8);
      local_80 = plVar1;
      if ((g_02700970 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
        g_026d78f8 = FUN_0006e710();
        g_026d78e0 = "MDAudioTrackItem";
        g_026d78e8 = 0x70;
        g_026d78f0 = FUN_0006e6c0;
        g_026d7900 = 0;
        ram_00000000026d7908 = 0;
        g_026d7910 = 0;
        g_026d7988 = 0;
        ram_00000000026d7990 = 0;
        g_026d7998 = 0;
        g_026d799a = 1;
        g_026d7918 = 0;
        ram_00000000026d7920 = 0;
        g_026d7928 = 0;
        ram_00000000026d7930 = 0;
        g_026d7938 = 0;
        ram_00000000026d7940 = 0;
        g_026d7948 = 0;
        ram_00000000026d7950 = 0;
        g_026d7958 = 0;
        ram_00000000026d7960 = 0;
        g_026d7968 = 0;
        ram_00000000026d7970 = 0;
        g_026d7978 = 0;
        ram_00000000026d7980 = 0;
        g_026d79a3 = 0;
        g_026d799b = 0;
        ___cxa_guard_release();
      }
      pplVar7 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar7 = &local_80;
        if (cVar3 == '\0') {
          pplVar7 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar7 == (int64_t *)0x0) {
        local_40 = local_80;
        local_38 = '\0';
        uVar9 = FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
      }
      else {
        FUN_00075b90();
        plVar1 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_40 = plVar1;
        local_38 = '\0';
        uVar9 = FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          uVar9 = FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
      }
      iVar8 = local_68._4_4_;
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar8 = -local_68._4_4_;
        }
        else {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
          FUN_00d23690(uVar9,local_68._4_4_);
          local_60 = local_60 + iVar8;
          iVar8 = 0;
        }
        local_68 = CONCAT44(iVar8,(int)local_68);
      }
    }
    FUN_002e0650();
  }
  puVar5 = local_48;
  FUN_01bee990();
  FUN_002ea230();
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002eb350
// ============================================================
// Function: FUN_002eb350
// Address: 002eb350
// Size: 880 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_002eb350(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int unaff_ESI;
  int64_t local_c8;
  char local_c0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_01bf1420();
  FUN_01beab60();
  (**(code **)(*(int64_t *)(local_c8 + 0x1e0) + 0x50))();
  plVar3 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (int64_t *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    if (unaff_ESI == 2) {
      cVar4 = FUN_01cf0800();
      if (cVar4 == '\0') {
        (**(code **)(*plVar3 + 0x918))();
        FUN_01cee390();
        lVar1 = g_026f6f70;
        if (g_026f6f70 != 0) {
          FUN_00d50b00();
        }
        lVar2 = g_026fe488;
        if (g_026fe488 != 0) {
          FUN_00d50b00();
        }
        local_a8 = lVar2;
        local_a0 = '\x01';
        local_98 = 0;
        local_90 = '\0';
        FUN_00d31230(&local_98,&local_a8);
        local_58 = local_38;
        local_50 = 0;
        if (local_30 == '\0') {
          if (local_38 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        local_50 = '\x01';
        (**(code **)(*plVar3 + 0x6a8))();
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      cVar4 = FUN_01cf0800();
      lVar1 = g_026f6f70;
      if (cVar4 != '\0') {
        if (g_026f6f70 != 0) {
          FUN_00d50b00();
        }
        lVar2 = g_026fe490;
        local_88 = lVar1;
        local_80 = '\x01';
        if (g_026fe490 != 0) {
          FUN_00d50b00();
        }
        local_78 = lVar2;
        local_70 = '\x01';
        local_68 = 0;
        local_60 = '\0';
        FUN_00d31230(&local_68,&local_78);
        local_48 = local_38;
        local_40 = 0;
        if (local_30 == '\0') {
          if (local_38 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        local_40 = '\x01';
        (**(code **)(*plVar3 + 0x6a8))();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        FUN_01cee390();
      }
      if (unaff_ESI == 0) {
        (**(code **)(*plVar3 + 0x918))();
      }
      else {
        (**(code **)(*plVar3 + 0x918))();
      }
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0006a850
// ============================================================
// Function: FUN_0006a850
// Address: 0006a850
// Size: 785 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0006a850(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  void* pVar7;
  int in_EDX;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar8;
  uint8_t auVar9 [16];
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  uVar11 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar10 = (uint32_t)param_2;
  (**(code **)(*this_ptr + 0x4d8))();
  lVar5 = this_ptr[0x28];
  lVar1 = *arg1;
  if (lVar5 == lVar1) {
    if ((int)this_ptr[0x29] == in_EDX) {
      return;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x28] = lVar1;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x27] != 0) {
    this_ptr[0x27] = 0;
    FUN_00d50b20();
  }
  if (this_ptr[0x2a] != 0) {
    this_ptr[0x2a] = 0;
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x29) = in_EDX;
  if (this_ptr[0x28] == 0) {
    if ((this_ptr[0x32] != 0) && (FUN_01e1e360(), this_ptr[0x32] != 0)) {
      this_ptr[0x32] = 0;
      FUN_00d50b20();
    }
    goto LAB_0006ab41;
  }
  FUN_01646440();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01646020();
  pVar7 = *(void* *)(this_ptr + 0x29);
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  pvVar4 = _pthread_getspecific(pVar7);
  plVar8 = local_38;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar8 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = (**(code **)(*plVar8 + 0x398))();
  this_ptr[0x2d] = lVar5;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  dVar3 = g_0238fee8;
  dVar2 = (double)this_ptr[0x2d];
  if ((double)this_ptr[0x2d] < g_0238fee8) {
    this_ptr[0x2d] = 0x3ff0000000000000;
    dVar2 = dVar3;
  }
  auVar9._4_4_ = uVar11;
  auVar9._0_4_ = uVar10;
  auVar9._8_4_ = in_XMM1_Dc;
  auVar9._12_4_ = in_XMM1_Dd;
  auVar9 = blendps(auVar9,ZEXT416((uint)((float)dVar2 * *(float *)((int64_t)this_ptr + 0x15c) +
                                        g_02390110)),1);
  (**(code **)(*this_ptr + 0x4e8))(auVar9._0_8_);
  (**(code **)(*this_ptr + 0x968))();
  FUN_01e1eb80(g_02390108);
  plVar8 = (int64_t *)this_ptr[0x32];
  plVar6 = plVar8;
  if (plVar8 != local_38) {
    plVar6 = local_38;
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        goto LAB_0006aabb;
      }
      FUN_00d50b00();
      plVar8 = (int64_t *)this_ptr[0x32];
      this_ptr[0x32] = (int64_t)local_38;
    }
    else {
      local_30 = '\0';
LAB_0006aabb:
      this_ptr[0x32] = (int64_t)plVar6;
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0006ab41:
  (**(code **)(*this_ptr + 0x620))();
  return;
}



// ============================================================
// 002eacb0
// ============================================================
// Function: FUN_002eacb0
// Address: 002eacb0
// Size: 709 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void* FUN_002eacb0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  void*this_ptr;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  uVar7 = FUN_01beea30();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_002eaf6f;
    uVar7 = FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_002eaf6f;
  local_50 = 0;
  local_58 = (int64_t *)0x0;
  local_48 = plVar1;
  local_40 = -1;
  iStack_3c = 0;
  local_38 = 0;
  while( true ) {
    iVar3 = iStack_3c;
    if (iStack_3c != 0) {
      if (iStack_3c < 1) {
        iStack_3c = -iStack_3c;
      }
      else {
        local_40 = local_40 - iStack_3c;
        uVar7 = FUN_00d23690(uVar7,iStack_3c);
        local_38 = local_38 + iVar3;
        iStack_3c = 0;
      }
    }
    lVar5 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
    plVar1 = *(int64_t **)(local_48[2] + 8 + lVar5 * 8);
    local_58 = plVar1;
    if ((g_02700970 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_00, iVar3 != 0)) {
      g_026d78f8 = FUN_0006e710();
      g_026d78e0 = "MDAudioTrackItem";
      g_026d78e8 = 0x70;
      g_026d78f0 = FUN_0006e6c0;
      g_026d7900 = 0;
      ram_00000000026d7908 = 0;
      g_026d7910 = 0;
      g_026d7988 = 0;
      ram_00000000026d7990 = 0;
      g_026d7998 = 0;
      g_026d799a = 1;
      g_026d7918 = 0;
      ram_00000000026d7920 = 0;
      g_026d7928 = 0;
      ram_00000000026d7930 = 0;
      g_026d7938 = 0;
      ram_00000000026d7940 = 0;
      g_026d7948 = 0;
      ram_00000000026d7950 = 0;
      g_026d7958 = 0;
      ram_00000000026d7960 = 0;
      g_026d7968 = 0;
      ram_00000000026d7970 = 0;
      g_026d7978 = 0;
      ram_00000000026d7980 = 0;
      g_026d79a3 = 0;
      g_026d799b = 0;
      uVar7 = ___cxa_guard_release();
    }
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar6 = &local_58;
      uVar7 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    if (*pplVar6 != (int64_t *)0x0) {
      FUN_00075b90();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      uVar7 = FUN_00d21140();
      if (local_68 != 0) {
        uVar7 = FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar7 = FUN_00d50b20();
      }
    }
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_002eaf6f:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 002f1240
// ============================================================
// Function: FUN_002f1240
// Address: 002f1240
// Size: 640 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


int64_t * FUN_002f1240(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int64_t *this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_78;
  char local_70;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  uVar6 = FUN_01bf2670();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_002f147d;
    uVar6 = FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_002f147d;
  local_50 = 0;
  local_58 = (int64_t *)0x0;
  local_48 = plVar1;
  local_40 = -1;
  iStack_3c = 0;
  local_38 = 0;
  while( true ) {
    iVar3 = iStack_3c;
    if (iStack_3c != 0) {
      if (iStack_3c < 1) {
        iStack_3c = -iStack_3c;
      }
      else {
        local_40 = local_40 - iStack_3c;
        uVar6 = FUN_00d23690(uVar6,iStack_3c);
        local_38 = local_38 + iVar3;
        iStack_3c = 0;
      }
    }
    lVar4 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
    plVar1 = *(int64_t **)(local_48[2] + 8 + lVar4 * 8);
    local_58 = plVar1;
    if ((g_02700970 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar3 != 0)) {
      g_026d78f8 = FUN_0006e710();
      g_026d78e0 = "MDAudioTrackItem";
      g_026d78e8 = 0x70;
      g_026d78f0 = FUN_0006e6c0;
      g_026d7900 = 0;
      ram_00000000026d7908 = 0;
      g_026d7910 = 0;
      g_026d7988 = 0;
      ram_00000000026d7990 = 0;
      g_026d7998 = 0;
      g_026d799a = 1;
      g_026d7918 = 0;
      ram_00000000026d7920 = 0;
      g_026d7928 = 0;
      ram_00000000026d7930 = 0;
      g_026d7938 = 0;
      ram_00000000026d7940 = 0;
      g_026d7948 = 0;
      ram_00000000026d7950 = 0;
      g_026d7958 = 0;
      ram_00000000026d7960 = 0;
      g_026d7968 = 0;
      ram_00000000026d7970 = 0;
      g_026d7978 = 0;
      ram_00000000026d7980 = 0;
      g_026d79a3 = 0;
      g_026d799b = 0;
      uVar6 = ___cxa_guard_release();
    }
    pplVar5 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar5 = &local_58;
      uVar6 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pplVar5 = (int64_t **)&g_02802688;
      }
    }
    plVar1 = *pplVar5;
    if (plVar1 != (int64_t *)0x0) {
      uVar6 = FUN_00075b90();
      lVar4 = *param_2;
      if ((local_70 != '\0') && (local_78 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      if (local_78 == lVar4) {
        *(void*)(this_ptr + 1) = 0;
        FUN_00d50b00();
        *this_ptr = (int64_t)plVar1;
        *(void*)(this_ptr + 1) = 1;
        FUN_002e0650();
        FUN_00d50b20();
        return this_ptr;
      }
    }
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_002f147d:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}



// ============================================================
// 0006a5a0
// ============================================================
// Function: FUN_0006a5a0
// Address: 0006a5a0
// Size: 589 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0006a5a0(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  double dVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  double dVar7;
  uint8_t auVar8 [16];
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  int64_t *local_30;
  char local_28;
  
  uVar10 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar9 = (uint32_t)param_2;
  (**(code **)(*this_ptr + 0x4d8))();
  lVar4 = this_ptr[0x27];
  lVar1 = *arg1;
  if (lVar4 == lVar1) {
    return;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  this_ptr[0x27] = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x28] != 0) {
    this_ptr[0x28] = 0;
    FUN_00d50b20();
  }
  if (this_ptr[0x2a] != 0) {
    this_ptr[0x2a] = 0;
    FUN_00d50b20();
  }
  if (this_ptr[0x27] == 0) {
    if ((this_ptr[0x32] != 0) && (FUN_01e1e360(), this_ptr[0x32] != 0)) {
      this_ptr[0x32] = 0;
      FUN_00d50b20();
    }
    goto LAB_0006a7cf;
  }
  FUN_013fb320();
  pvVar3 = _pthread_getspecific(param_1);
  plVar6 = local_30;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (int64_t *)local_30[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  dVar7 = (double)(**(code **)(*plVar6 + 0x398))();
  this_ptr[0x2d] = (int64_t)dVar7;
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
    dVar7 = (double)this_ptr[0x2d];
  }
  dVar2 = g_0238fee8;
  if (dVar7 < g_0238fee8) {
    this_ptr[0x2d] = 0x3ff0000000000000;
    dVar7 = dVar2;
  }
  auVar8._4_4_ = uVar10;
  auVar8._0_4_ = uVar9;
  auVar8._8_4_ = in_XMM1_Dc;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar8 = blendps(auVar8,ZEXT416((uint)((float)dVar7 * *(float *)((int64_t)this_ptr + 0x15c) +
                                        g_02390110)),1);
  (**(code **)(*this_ptr + 0x4e8))(auVar8._0_8_);
  (**(code **)(*this_ptr + 0x968))();
  FUN_01e1eb80(g_02390108);
  plVar6 = (int64_t *)this_ptr[0x32];
  plVar5 = plVar6;
  if (plVar6 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_0006a749;
      }
      FUN_00d50b00();
      plVar6 = (int64_t *)this_ptr[0x32];
      this_ptr[0x32] = (int64_t)local_30;
    }
    else {
      local_28 = '\0';
LAB_0006a749:
      this_ptr[0x32] = (int64_t)plVar5;
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0006a7cf:
  (**(code **)(*this_ptr + 0x620))();
  return;
}



// ============================================================
// 0006bed0
// ============================================================
// Function: FUN_0006bed0
// Address: 0006bed0
// Size: 939 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0006bed0(float param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*arg1;
  int64_t *this_ptr;
  float fVar3;
  uint64_t uVar4;
  uint64_t in_XMM1_Qb;
  uint8_t auVar5 [16];
  float fStack_94;
  int64_t local_38;
  char local_30;
  
  uVar4 = param_2;
  FUN_01e3f820();
  FUN_01cfc6a0(g_02390120);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d488d0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3b0))(param_1);
  FUN_01cfc6a0(g_0239011c);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d488d0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  fStack_94 = (float)((uint64_t)uVar4 >> 0x20);
  fStack_94 = fStack_94 * g_0239011c;
  FUN_01d48b40(g_02390124);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  fVar3 = (float)FUN_01e436c0();
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))(g_0239011c * fStack_94 + fVar3);
  if (param_1 < g_02390114) {
    FUN_01cfc6a0(g_02390128);
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    auVar5._8_8_ = in_XMM1_Qb;
    auVar5._0_8_ = param_2;
    auVar5 = blendps(auVar5,ZEXT416((uint)(g_02390114 - param_1)),1);
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))(param_1,auVar5._0_8_);
  }
  lVar2 = this_ptr[0x2a];
  if (lVar2 == 0) {
    (**(code **)(*this_ptr + 0x990))();
    lVar2 = this_ptr[0x2a];
    if (lVar2 == 0) {
      return;
    }
  }
  plVar1 = (int64_t *)*arg1;
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x400))(g_02390114);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01cfc6a0(g_02390124);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d488d0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  return;
}



// ============================================================
// 00703c00
// ============================================================
// Function: FUN_00703c00
// Address: 00703c00
// Size: 620 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


uint64_t FUN_00703c00(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint64_t unaff_RBX;
  int64_t *this_ptr;
  bool bVar5;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40;
  
  (**(code **)(*this_ptr + 0x5d8))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_00703c71;
    }
LAB_00703cd9:
    bVar2 = true;
LAB_00703cde:
    lVar1 = this_ptr[2];
  }
  else {
    if (local_48 == 0) goto LAB_00703cd9;
LAB_00703c71:
    FUN_0063f230();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_0063f230();
      cVar3 = FUN_00212c70();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      bVar2 = false;
      unaff_RBX = 0;
      if (cVar3 != '\0') goto LAB_00703e4c;
      goto LAB_00703cde;
    }
    bVar2 = false;
    lVar1 = this_ptr[2];
    unaff_RBX = 0;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01beead0();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_007035b0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    unaff_RBX = 0;
  }
  else {
    bVar5 = *(int *)(local_48 + 0xc) != 0;
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar5);
    if ((bVar5) && (param_2 != '\0')) {
      cVar3 = (**(code **)(*this_ptr + 0x650))(param_1,1);
      if (cVar3 == '\0') {
        unaff_RBX = 0;
      }
      else {
        uVar4 = (**(code **)(*this_ptr + 0x668))(param_1,1);
        unaff_RBX = (uint64_t)uVar4;
      }
    }
    FUN_00d50b20();
  }
LAB_00703e4c:
  if (!bVar2) {
    FUN_00d50b20();
  }
  return unaff_RBX & 0xffffffff;
}



// ============================================================
// 0030bb60
// ============================================================
// Function: FUN_0030bb60
// Address: 0030bb60
// Size: 547 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
//   "MDAudioTrackItemType"
//   "_trackItemType"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void* FUN_0030bb60(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_02700ce8 = "_trackItemType";
      g_02700cf0 = &g_026d78e0;
      g_02700cf8 = 0;
      g_02700d00 = 0x6500;
      g_02700d08 = "MDAudioTrackItemType";
      g_02700d10 = &g_02700d80;
      g_02700d18 = 0;
      ram_0000000002700d20 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_02700ce8;
}



// ============================================================
// 0030b420
// ============================================================
// Function: FUN_0030b420
// Address: 0030b420
// Size: 565 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0030b420(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00309440();
  *this_ptr = &g_024c4bd8;
  this_ptr[2] = &g_024c4ff8;
  FUN_0030b6a0();
  *(void*)(this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d799b == '\0') {
    FUN_0030b9d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d799b == '\0') {
    FUN_0030bb60();
    FUN_00e87980();
  }
  return;
}

