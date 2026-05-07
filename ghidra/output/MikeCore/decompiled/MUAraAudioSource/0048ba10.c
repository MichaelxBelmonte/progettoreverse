// Function: FUN_0048ba10
// Address: 0048ba10
// Size: 4413 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAudioFileSource"
//   "%@: %@"
//   "MUCustomAudioSource"
//   "MUAraAudioSource"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048ba10(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong *unaff_RDI;
  longlong **pplVar10;
  bool bVar11;
  undefined4 uVar12;
  longlong local_150;
  longlong local_148;
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
  longlong *local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (unaff_RDI[0x35] == 0) {
    return;
  }
  if (unaff_RDI[0x23] == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_70;
  FUN_01320d00();
  plVar4 = local_70;
  if ((DAT_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
    _DAT_026e3238 = FUN_00115af0();
    DAT_026e3220 = "MUAudioFileSource";
    _DAT_026e3228 = 0xa0;
    param_1 = 0x136df0;
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
  if (plVar4 == (longlong *)0x0) {
LAB_0048bacb:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0048bacb;
  }
  plVar4 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar10 = &local_70;
    FUN_01320d00();
    plVar4 = local_70;
    if ((DAT_0272a620 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
      _DAT_02799028 = FUN_00115af0();
      _DAT_02799010 = "MUCustomAudioSource";
      _DAT_02799018 = 0x78;
      param_1 = 0x49c5f0;
      _DAT_02799020 = FUN_0049c5f0;
      _DAT_02799030 = 0;
      uRam0000000002799038 = 0;
      _DAT_02799040 = 0;
      uRam0000000002799048 = 0;
      _DAT_02799050 = 0;
      uRam0000000002799058 = 0;
      _DAT_02799060 = 0;
      uRam0000000002799068 = 0;
      _DAT_02799070 = 0;
      uRam0000000002799078 = 0;
      _DAT_02799080 = 0;
      uRam0000000002799088 = 0;
      _DAT_02799090 = 0;
      uRam0000000002799098 = 0;
      _DAT_027990a0 = 0;
      uRam00000000027990a8 = 0;
      _DAT_027990b0 = 0;
      uRam00000000027990b8 = 0;
      _DAT_027990c0 = 0;
      uRam00000000027990c8 = 0;
      _DAT_027990d0 = 0;
      ___cxa_guard_release();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 != '\0') goto LAB_0048bcfd;
    }
    pplVar10 = (longlong **)&DAT_02802688;
LAB_0048bcfd:
    plVar4 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar10 + 1) = 0;
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0164ceb0();
    if (local_70 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*local_70 + 0x10))();
    }
    if ((DAT_0272a630 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
      _DAT_02708970 = FUN_0049c720;
      _DAT_02708980 = 0;
      uRam0000000002708988 = 0;
      _DAT_02708990 = 0;
      uRam0000000002708998 = 0;
      _DAT_027089a0 = 0;
      uRam00000000027089a8 = 0;
      _DAT_027089b0 = 0;
      uRam00000000027089b8 = 0;
      _DAT_027089c0 = 0;
      uRam00000000027089c8 = 0;
      _DAT_027089d0 = 0;
      uRam00000000027089d8 = 0;
      _DAT_027089e0 = 0;
      uRam00000000027089e8 = 0;
      _DAT_027089f0 = 0;
      uRam00000000027089f8 = 0;
      _DAT_02708a00 = 0;
      uRam0000000002708a08 = 0;
      _DAT_02708a10 = 0;
      uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
    bVar11 = true;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 != '\0') {
        FUN_00d50b00();
        bVar11 = false;
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
    lVar5 = DAT_026f6f70;
    if (!bVar11) {
      plVar4 = (longlong *)unaff_RDI[0x35];
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar8 = DAT_026fbaa0;
      local_118 = lVar5;
      local_110 = '\x01';
      if (DAT_026fbaa0 != 0) {
        FUN_00d50b00();
      }
      local_108 = lVar8;
      local_100 = '\x01';
      local_f8 = 0;
      local_f0 = '\0';
      plVar7 = &local_f8;
      FUN_00d31230(plVar7,&local_108);
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01667b90();
      local_150 = local_148;
      uVar12 = FUN_00083ea0(2,&local_150);
      FUN_00d8cb40(uVar12,&local_70);
      local_a0 = local_40;
      local_98 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_98 = '\x01';
      (**(code **)(*plVar4 + 0x968))();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_70 = (longlong *)&DAT_0253d630;
      if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
        FUN_00d50b20();
      }
      local_70 = &DAT_024c5048;
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_70 + 0x450))();
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    local_78 = plVar4;
    FUN_00d50b00();
    local_88 = '\0';
    plVar4 = unaff_RDI;
    local_40 = unaff_RDI;
    do {
      (**(code **)(*plVar4 + 0x370))();
      plVar7 = local_70;
      if (local_70 == plVar4) {
        if (((local_88 == '\0') && (local_70 != (longlong *)0x0)) &&
           (plVar7 = plVar4, local_68[0] != '\0')) goto LAB_0048bbc7;
      }
      else {
        local_40 = local_70;
        if (local_68[0] == '\0') {
          if (local_88 == '\0') {
            pcVar3 = &local_88;
          }
          else {
            FUN_00d50b20();
            pcVar3 = &local_88;
          }
        }
        else {
          if (local_88 != '\0') {
            FUN_00d50b20();
          }
LAB_0048bbc7:
          local_88 = '\x01';
          pcVar3 = local_68;
        }
        *pcVar3 = '\0';
        plVar4 = plVar7;
      }
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar10 = &local_40;
        if (cVar1 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar10 != (longlong *)0x0) {
        if ((local_88 == '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (plVar4 != (longlong *)0x0);
    param_1 = (pthread_key_t)pplVar10;
    FUN_00d50b20();
    if (plVar4 != (longlong *)0x0) {
      FUN_00757c60();
      if (local_70 == (longlong *)0x0) {
        bVar11 = false;
      }
      else {
        FUN_00757c60();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        bVar11 = local_40 != (longlong *)0x0;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        FUN_00757c60();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        plVar4 = local_70;
        if (local_68[0] == '\0') {
          if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
             (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68[0] = '\0';
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          local_68[0] = '\0';
          local_70 = (longlong *)0x0;
          local_60 = plVar4;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_58._4_4_ = 0;
          local_e8 = plVar4;
          do {
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
            lVar5 = (longlong)(int)local_58;
            iVar9 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            if (*(int *)((longlong)local_60 + 0xc) <= iVar9) {
              plVar4 = local_60;
              FUN_000be170();
              param_1 = (pthread_key_t)plVar4;
              FUN_00d50b20();
              break;
            }
            lVar8 = local_60[2];
            local_138 = *(longlong **)(lVar8 + 8 + lVar5 * 8);
            local_130 = '\0';
            local_70 = local_138;
            FUN_004f9cf0();
            plVar4 = local_40;
            pVar6 = (pthread_key_t)lVar8;
            if (local_38 == '\0') {
              if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar7 = (longlong *)unaff_RDI[0x23];
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_38 = '\0';
            local_40 = plVar7;
            cVar1 = FUN_00d23d70();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar1 == '\0') {
              if (plVar7 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (plVar4 != (longlong *)0x0) goto LAB_0048c0d0;
            }
            else {
              iVar9 = *(int *)((longlong)plVar4 + 0xc);
              if (plVar7 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (iVar9 == 1) goto LAB_0048c73b;
LAB_0048c0d0:
              FUN_00d50b20();
            }
          } while( true );
        }
      }
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123abe0();
  plVar4 = local_70;
  if ((((local_68[0] == '\0') && (local_70 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((*(char *)((longlong)unaff_RDI + 0x27a) == '\0') &&
     (*(char *)((longlong)unaff_RDI + 0x27b) != '\0')) {
    local_128 = plVar4;
    local_120 = '\0';
    FUN_014fff90();
    plVar7 = local_70;
    if (plVar4 == local_70) {
LAB_0048c7b4:
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_68[0] == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar11 = plVar4 != (longlong *)0x0;
        plVar4 = plVar7;
        if (bVar11) {
          FUN_00d50b20();
        }
        goto LAB_0048c7b4;
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_68[0] = '\0';
      plVar4 = plVar7;
    }
    if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar4 != (longlong *)0x0) {
    plVar4 = (longlong *)unaff_RDI[0x35];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_40 + 0x468))();
    local_c0 = local_70;
    local_b8 = 0;
    if (local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = '\0';
    }
    local_b8 = '\x01';
    (**(code **)(*plVar4 + 0x968))();
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar4 = (longlong *)unaff_RDI[0x35];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_40 + 0x470))();
    local_b0 = local_70;
    local_a8 = 0;
    if (local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = '\0';
    }
    local_a8 = '\x01';
    (**(code **)(*plVar4 + 0x6a8))();
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_0048c6cc:
  FUN_00d50b20();
  return;
LAB_0048c73b:
  plVar4 = (longlong *)unaff_RDI[0x35];
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  local_e0 = local_40;
  local_d8 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_d8 = '\x01';
  (**(code **)(*plVar4 + 0x968))();
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)unaff_RDI[0x35];
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123abe0();
  (**(code **)(*(longlong *)CONCAT71(uStack_87,local_88) + 0x468))();
  local_d0 = local_40;
  local_c8 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_c8 = '\x01';
  (**(code **)(*plVar4 + 0x6a8))();
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_000be170();
  FUN_00d50b20();
  FUN_00d50b20();
  goto LAB_0048c6cc;
}


