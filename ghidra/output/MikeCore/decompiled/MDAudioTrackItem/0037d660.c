// Function: FUN_0037d660
// Address: 0037d660
// Size: 3797 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
//   "MUAudioFileSource"


/* WARNING: Removing unreachable block (ram,0x0037d748) */
/* WARNING: Removing unreachable block (ram,0x0037d754) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0037d660(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong **pplVar8;
  int iVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x630))();
    plVar2 = local_68;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      return;
    }
  }
  FUN_01f07b90();
  FUN_00d216c0();
  (**(code **)(*unaff_RDI + 0x630))();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0037d7b7;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_0037d7b7:
    local_60 = '\0';
    local_68 = (longlong *)0x0;
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
      lVar4 = (longlong)(int)local_50;
      iVar9 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar9);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar9) break;
      plVar1 = *(longlong **)(local_58[2] + 8 + lVar4 * 8);
      local_90 = plVar1;
      local_68 = plVar1;
      FUN_0006e1c0();
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_90;
        if (cVar3 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar8 != (longlong *)0x0) {
        pvVar5 = _pthread_getspecific((pthread_key_t)pplVar8);
        pVar6 = (pthread_key_t)pplVar8;
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        if (local_88 == '\0') {
          if (local_90 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0037d930;
          }
        }
        else if (local_90 != (longlong *)0x0) {
LAB_0037d930:
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          plVar1 = local_90;
          if ((DAT_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
            _DAT_026e3238 = FUN_00115af0();
            DAT_026e3220 = "MUAudioFileSource";
            _DAT_026e3228 = 0xa0;
            _DAT_026e3230 = FUN_00136df0;
            _DAT_026e3240 = 0;
            uRam00000000026e3248 = 0;
            _DAT_026e3250 = 0;
            uRam00000000026e3258 = 0;
            _DAT_026e3260 = 0;
            uRam00000000026e3268 = 0;
            _DAT_026e3270 = 0;
            uRam00000000026e3278 = 0;
            _DAT_026e3280 = 0;
            uRam00000000026e3288 = 0;
            _DAT_026e3290 = 0;
            uRam00000000026e3298 = 0;
            _DAT_026e32a0 = 0;
            uRam00000000026e32a8 = 0;
            _DAT_026e32b0 = 0;
            uRam00000000026e32b8 = 0;
            _DAT_026e32c0 = 0;
            uRam00000000026e32c8 = 0;
            _DAT_026e32d0 = 0;
            uRam00000000026e32d8 = 0;
            _DAT_026e32e0 = 0;
            ___cxa_guard_release();
          }
          pplVar8 = (longlong **)&DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar8 = &local_90;
            if (cVar3 == '\0') {
              pplVar8 = (longlong **)&DAT_02802688;
            }
          }
          plVar1 = *pplVar8;
          if (*(char *)(pplVar8 + 1) == '\0') {
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar8 + 1) = 0;
          }
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            local_88 = '\0';
            local_90 = plVar1;
            FUN_00d235a0();
            if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
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
  (**(code **)(*unaff_RDI + 0x630))();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0037db4f;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_0037db4f:
    local_60 = '\0';
    local_68 = (longlong *)0x0;
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
      lVar4 = (longlong)(int)local_50;
      iVar9 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar9);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar9) break;
      plVar1 = *(longlong **)(local_58[2] + 8 + lVar4 * 8);
      local_90 = plVar1;
      local_68 = plVar1;
      FUN_000823a0();
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_90;
        if (cVar3 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar8 != (longlong *)0x0) {
        pvVar5 = _pthread_getspecific((pthread_key_t)pplVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        plVar1 = local_90;
        if (local_88 == '\0') {
          if (local_90 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0037dccb;
          }
        }
        else if (local_90 != (longlong *)0x0) {
LAB_0037dccb:
          local_88 = '\0';
          local_90 = (longlong *)0x0;
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
            lVar4 = (longlong)(int)local_78;
            iVar9 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar9);
            if (*(int *)((longlong)local_80 + 0xc) <= iVar9) break;
            lVar7 = local_80[2];
            local_90 = *(longlong **)(lVar7 + 8 + lVar4 * 8);
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
            pVar6 = (pthread_key_t)lVar7;
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0037ddf0;
              }
            }
            else if (local_40 != (longlong *)0x0) {
LAB_0037ddf0:
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01320d00();
              plVar1 = local_40;
              if ((DAT_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                _DAT_026e3238 = FUN_00115af0();
                DAT_026e3220 = "MUAudioFileSource";
                _DAT_026e3228 = 0xa0;
                _DAT_026e3230 = FUN_00136df0;
                _DAT_026e3240 = 0;
                uRam00000000026e3248 = 0;
                _DAT_026e3250 = 0;
                uRam00000000026e3258 = 0;
                _DAT_026e3260 = 0;
                uRam00000000026e3268 = 0;
                _DAT_026e3270 = 0;
                uRam00000000026e3278 = 0;
                _DAT_026e3280 = 0;
                uRam00000000026e3288 = 0;
                _DAT_026e3290 = 0;
                uRam00000000026e3298 = 0;
                _DAT_026e32a0 = 0;
                uRam00000000026e32a8 = 0;
                _DAT_026e32b0 = 0;
                uRam00000000026e32b8 = 0;
                _DAT_026e32c0 = 0;
                uRam00000000026e32c8 = 0;
                _DAT_026e32d0 = 0;
                uRam00000000026e32d8 = 0;
                _DAT_026e32e0 = 0;
                ___cxa_guard_release();
              }
              pplVar8 = (longlong **)&DAT_02802688;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar8 = &local_40;
                if (cVar3 == '\0') {
                  pplVar8 = (longlong **)&DAT_02802688;
                }
              }
              plVar1 = *pplVar8;
              if (*(char *)(pplVar8 + 1) == '\0') {
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar8 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar1 != (longlong *)0x0) {
                local_38 = '\0';
                local_40 = plVar1;
                FUN_00d235a0();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
  uVar10 = (**(code **)(*unaff_RDI + 0x630))();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_0037e5cd;
    uVar10 = FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else if (local_68 == (longlong *)0x0) goto LAB_0037e5cd;
  local_60 = '\0';
  local_68 = (longlong *)0x0;
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
    lVar4 = (longlong)(int)local_50;
    iVar9 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar9);
    if (*(int *)((longlong)local_58 + 0xc) <= iVar9) break;
    plVar1 = *(longlong **)(local_58[2] + 8 + lVar4 * 8);
    local_68 = plVar1;
    local_90 = plVar1;
    if ((DAT_02700970 == '\0') &&
       (iVar9 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_00, iVar9 != 0)) {
      _DAT_026d78f8 = FUN_0006e710();
      _DAT_026d78e0 = "MDAudioTrackItem";
      _DAT_026d78e8 = 0x70;
      _DAT_026d78f0 = FUN_0006e6c0;
      _DAT_026d7900 = 0;
      uRam00000000026d7908 = 0;
      _DAT_026d7910 = 0;
      _DAT_026d7988 = 0;
      uRam00000000026d7990 = 0;
      _DAT_026d7998 = 0;
      DAT_026d799a = 1;
      _DAT_026d7918 = 0;
      uRam00000000026d7920 = 0;
      _DAT_026d7928 = 0;
      uRam00000000026d7930 = 0;
      _DAT_026d7938 = 0;
      uRam00000000026d7940 = 0;
      _DAT_026d7948 = 0;
      uRam00000000026d7950 = 0;
      _DAT_026d7958 = 0;
      uRam00000000026d7960 = 0;
      _DAT_026d7968 = 0;
      uRam00000000026d7970 = 0;
      _DAT_026d7978 = 0;
      uRam00000000026d7980 = 0;
      DAT_026d79a3 = 0;
      _DAT_026d799b = 0;
      uVar10 = ___cxa_guard_release();
    }
    pplVar8 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar8 = &local_90;
      uVar10 = extraout_XMM0_Da;
      if (cVar3 == '\0') {
        pplVar8 = (longlong **)&DAT_02802688;
      }
    }
    if (*pplVar8 != (longlong *)0x0) {
      uVar10 = FUN_00075b90();
      plVar1 = local_90;
      pVar6 = (pthread_key_t)pplVar8;
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00075b90();
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_012e5ae0();
        plVar1 = local_90;
        if (local_88 == '\0') {
          if (((local_90 != (longlong *)0x0) && (uVar10 = FUN_00d50b00(), local_88 != '\0')) &&
             (local_90 != (longlong *)0x0)) {
            uVar10 = FUN_00d50b20();
          }
        }
        else {
          local_88 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          local_88 = '\0';
          local_90 = (longlong *)0x0;
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
            lVar4 = (longlong)(int)local_78;
            iVar9 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar9);
            if (*(int *)((longlong)local_80 + 0xc) <= iVar9) break;
            lVar7 = local_80[2];
            local_90 = *(longlong **)(lVar7 + 8 + lVar4 * 8);
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
            pVar6 = (pthread_key_t)lVar7;
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0037e2f0;
              }
            }
            else if (local_40 != (longlong *)0x0) {
LAB_0037e2f0:
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01320d00();
              plVar1 = local_40;
              if ((DAT_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                _DAT_026e3238 = FUN_00115af0();
                DAT_026e3220 = "MUAudioFileSource";
                _DAT_026e3228 = 0xa0;
                _DAT_026e3230 = FUN_00136df0;
                _DAT_026e3240 = 0;
                uRam00000000026e3248 = 0;
                _DAT_026e3250 = 0;
                uRam00000000026e3258 = 0;
                _DAT_026e3260 = 0;
                uRam00000000026e3268 = 0;
                _DAT_026e3270 = 0;
                uRam00000000026e3278 = 0;
                _DAT_026e3280 = 0;
                uRam00000000026e3288 = 0;
                _DAT_026e3290 = 0;
                uRam00000000026e3298 = 0;
                _DAT_026e32a0 = 0;
                uRam00000000026e32a8 = 0;
                _DAT_026e32b0 = 0;
                uRam00000000026e32b8 = 0;
                _DAT_026e32c0 = 0;
                uRam00000000026e32c8 = 0;
                _DAT_026e32d0 = 0;
                uRam00000000026e32d8 = 0;
                _DAT_026e32e0 = 0;
                ___cxa_guard_release();
              }
              pplVar8 = (longlong **)&DAT_02802688;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar8 = &local_40;
                if (cVar3 == '\0') {
                  pplVar8 = (longlong **)&DAT_02802688;
                }
              }
              plVar1 = *pplVar8;
              if (*(char *)(pplVar8 + 1) == '\0') {
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar8 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar1 != (longlong *)0x0) {
                local_38 = '\0';
                local_40 = plVar1;
                FUN_00d235a0();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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


