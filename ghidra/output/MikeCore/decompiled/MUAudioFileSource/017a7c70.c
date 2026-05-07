// Function: FUN_017a7c70
// Address: 017a7c70
// Size: 3015 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_017a7c70(undefined4 param_1,undefined1 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t in_ECX;
  pthread_key_t pVar6;
  int iVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *plVar9;
  undefined8 *unaff_RDI;
  longlong **pplVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  *param_2 = 0;
  lVar5 = DAT_0270b838;
  if (unaff_RSI[6] != 0) {
    if (DAT_0270b838 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_160 = lVar5;
    local_158 = '\x01';
    pplVar10 = &local_78;
    FUN_000175c0(param_1,&local_160);
    plVar8 = local_78;
    FUN_00053ac0();
    if (plVar8 == (longlong *)0x0) {
LAB_017a7d05:
      pplVar10 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_017a7d05;
    }
    plVar8 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar10 + 1) = 0;
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      uVar3 = FUN_00d45ad0();
      *param_2 = uVar3;
      FUN_00d50b20();
    }
  }
  uVar11 = FUN_017a7800();
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) goto LAB_017a7e41;
    local_d0 = local_78;
    uVar11 = FUN_00d50b00();
    local_150 = DAT_02729538;
  }
  else {
    local_150 = DAT_02729538;
    local_d0 = local_78;
    if (local_78 == (longlong *)0x0) {
LAB_017a7e41:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return unaff_RDI;
    }
  }
  DAT_02729538 = local_150;
  if (local_150 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_148 = '\x01';
  pplVar10 = &local_78;
  FUN_000175c0(uVar11,&local_150);
  plVar8 = local_78;
  FUN_01134da0();
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_017a7e29;
  }
  pplVar10 = (longlong **)&DAT_02802688;
LAB_017a7e29:
  local_80 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != (longlong *)0x0) {
    local_140 = local_80;
    local_138 = '\0';
    (**(code **)(*unaff_RSI + 0x378))();
    if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      in_ECX = (pthread_key_t)local_80;
    }
    FUN_01313ad0();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb480();
    local_90 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)unaff_RSI[3] + 0x3f0))();
    local_88 = local_78;
    if (((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_70 != '\0' && (local_78 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    lVar5 = unaff_RSI[3];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    uVar11 = FUN_017a4f40();
    plVar8 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != (longlong *)0x0) && (uVar11 = FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if (lVar5 != 0) {
      uVar11 = FUN_00d50b20();
    }
    if (local_90 != (longlong *)0x0) {
      local_c8 = plVar8;
      local_70 = '\0';
      local_78 = (longlong *)0x0;
      local_68 = local_90;
      local_60 = 0xffffffff;
      local_58 = 0;
      iVar7 = 0;
      while( true ) {
        if (iVar7 != 0) {
          if (iVar7 < 1) {
            iVar7 = -iVar7;
          }
          else {
            local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar7);
            uVar11 = FUN_00d23690(uVar11,iVar7);
            local_58 = local_58 + iVar7;
            iVar7 = 0;
          }
          local_60 = CONCAT44(iVar7,(int)local_60);
        }
        lVar5 = (longlong)(int)local_60;
        iVar7 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar7);
        if (*(int *)((longlong)local_68 + 0xc) <= iVar7) break;
        plVar8 = *(longlong **)(local_68[2] + 8 + lVar5 * 8);
        local_78 = plVar8;
        local_40 = plVar8;
        if ((DAT_026fdd70 == '\0') &&
           (iVar7 = ___cxa_guard_acquire(), uVar11 = extraout_XMM0_Da_01, iVar7 != 0)) {
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
          uVar11 = ___cxa_guard_release();
        }
        pplVar10 = (longlong **)&DAT_02802688;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar10 = &local_40;
          uVar11 = extraout_XMM0_Da;
          if (cVar2 == '\0') {
            pplVar10 = (longlong **)&DAT_02802688;
          }
        }
        plVar8 = local_78;
        if (*pplVar10 != (longlong *)0x0) {
          pcVar1 = (code *)unaff_RSI[8];
          if (pcVar1 != (code *)0x0) {
            local_130 = local_88;
            local_128 = '\0';
            pvVar4 = _pthread_getspecific((pthread_key_t)pplVar10);
            plVar9 = plVar8;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            uVar11 = (**(code **)(*plVar9 + 0x478))();
            local_c0 = local_50;
            local_b8 = 0;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                uVar11 = FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_b8 = '\x01';
            (*pcVar1)(uVar11,&local_c0);
            plVar9 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar9 != (longlong *)0x0) {
              pvVar4 = _pthread_getspecific((pthread_key_t)pplVar10);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_120 = plVar9;
              local_118 = '\0';
              FUN_0123ab70();
              if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              uVar11 = FUN_00d50b20();
              goto LAB_017a8078;
            }
          }
          pVar6 = (pthread_key_t)pplVar10;
          pvVar4 = _pthread_getspecific(pVar6);
          plVar9 = plVar8;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar9 + 0x498))();
          uVar11 = extraout_XMM0_Da_00;
          if (cVar2 == '\0') {
            local_110 = local_88;
            local_108 = '\0';
            pvVar4 = _pthread_getspecific(pVar6);
            plVar9 = plVar8;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            uVar11 = (**(code **)(*plVar9 + 0x478))();
            local_b0 = local_50;
            local_a8 = 0;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                uVar11 = FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_a8 = '\x01';
            FUN_0123a4e0(uVar11,&local_b0);
            plVar9 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar9 == (longlong *)0x0) {
              local_f0 = local_c8;
              local_e8 = '\0';
              pvVar4 = _pthread_getspecific(pVar6);
              plVar9 = plVar8;
              if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
              }
              uVar11 = (**(code **)(*plVar9 + 0x478))();
              local_a0 = local_50;
              local_98 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar11 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_98 = '\x01';
              FUN_0123a4e0(uVar11,&local_a0);
              plVar9 = local_40;
              if (local_38 == '\0') {
                if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                   (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_98 != '\0') && (local_a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar9 == (longlong *)0x0) {
                pvVar4 = _pthread_getspecific(pVar6);
                if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                  plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
                }
                uVar11 = (**(code **)(*plVar8 + 0x498))();
              }
              else {
                pvVar4 = _pthread_getspecific(pVar6);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_e0 = plVar9;
                local_d8 = '\0';
                FUN_0123ab70();
                if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                uVar11 = FUN_00d50b20();
              }
            }
            else {
              pvVar4 = _pthread_getspecific(pVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_100 = plVar9;
              local_f8 = '\0';
              FUN_0123ab70();
              if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              uVar11 = FUN_00d50b20();
            }
          }
        }
LAB_017a8078:
        iVar7 = local_60._4_4_;
      }
      FUN_00136d50();
      plVar8 = local_c8;
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar8 = local_90;
    if (local_88 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = local_80;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


