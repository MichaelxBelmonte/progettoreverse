// Function: FUN_00761a80
// Address: 00761a80
// Size: 2569 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Removing unreachable block (ram,0x00761d89) */
/* WARNING: Removing unreachable block (ram,0x00761d95) */
/* WARNING: Removing unreachable block (ram,0x0076203b) */
/* WARNING: Removing unreachable block (ram,0x00762047) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00761a80(pthread_key_t param_1,longlong *param_2)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong **pplVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar10;
  undefined4 uVar11;
  longlong *local_150;
  char local_148;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_0075c8d0();
  plVar7 = local_70;
  if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar1 = FUN_00ce6e30();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*plVar7 + 0x420))(), cVar1 == '\0')) {
    uVar8 = 0;
  }
  else {
    lVar3 = *unaff_RSI;
    local_48 = plVar7;
    if (lVar3 == 0) {
      FUN_00757c60();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb480();
      plVar6 = local_70;
      plVar10 = (longlong *)*unaff_RSI;
      if (plVar10 == local_70) {
        if (((char)unaff_RSI[1] != '\0') || (local_70 == (longlong *)0x0)) goto LAB_00761bf7;
        if (local_68 == '\0') {
          FUN_00d50b00();
          goto LAB_00761bef;
        }
LAB_00761bb4:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        local_68 = '\0';
        plVar7 = local_48;
      }
      else {
        lVar3 = unaff_RSI[1];
        if (local_68 != '\0') {
          *unaff_RSI = (longlong)local_70;
          if (((char)lVar3 != '\0') && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00761bb4;
        }
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)plVar6;
        if (((char)lVar3 != '\0') && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00761bef:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        plVar7 = local_48;
LAB_00761bf7:
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar3 = *unaff_RSI;
      if (lVar3 != 0) goto LAB_00761c2c;
    }
    else {
LAB_00761c2c:
      local_68 = '\0';
      local_70 = (longlong *)0x0;
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
        lVar3 = (longlong)(int)local_58;
        iVar9 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar9);
        if (*(int *)(local_60 + 0xc) <= iVar9) break;
        plVar7 = *(longlong **)(*(longlong *)(local_60 + 0x10) + 8 + lVar3 * 8);
        local_40 = plVar7;
        local_70 = plVar7;
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
        pplVar5 = (longlong **)&DAT_02802688;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar1 = FUN_00e85ea0();
          pplVar5 = &local_40;
          if (cVar1 == '\0') {
            pplVar5 = (longlong **)&DAT_02802688;
          }
        }
        plVar7 = local_70;
        if (*pplVar5 != (longlong *)0x0) {
          pvVar2 = _pthread_getspecific((pthread_key_t)pplVar5);
          plVar10 = local_70;
          pVar4 = (pthread_key_t)pplVar5;
          if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar10, lVar3 != 0)) {
            plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar7 + 0x478))();
          (**(code **)(*local_80 + 0x3f0))();
          cVar1 = (**(code **)(*local_40 + 0x50))();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar7 = local_70;
          if (cVar1 == '\0') {
            pvVar2 = _pthread_getspecific(pVar4);
            plVar10 = local_70;
            if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar10, lVar3 != 0)) {
              plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
            cVar1 = (**(code **)(*plVar7 + 0x498))();
            plVar7 = local_70;
            if (cVar1 != '\0') {
              pvVar2 = _pthread_getspecific(pVar4);
              plVar10 = local_70;
              if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar10, lVar3 != 0))
              {
                plVar7 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
              }
              (**(code **)(*plVar7 + 0x478))();
              uVar11 = (**(code **)(*local_150 + 0x388))();
              local_90 = local_80;
              local_88 = 0;
              if (local_78 == '\0') {
                if (local_80 != (longlong *)0x0) {
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
                if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                   (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
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
                pVar4 = (pthread_key_t)plVar6;
                if (plVar7 == local_40) {
LAB_00761fea:
                  plVar10 = plVar7;
                  if (local_38 != '\0') {
LAB_00761ff0:
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  if (local_38 == '\0') {
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    if (plVar7 != (longlong *)0x0) {
                      FUN_00d50b20();
                      plVar7 = plVar10;
                      goto LAB_00761fea;
                    }
                    if (local_38 == '\0') goto LAB_00761ffe;
                    goto LAB_00761ff0;
                  }
                  if (plVar7 != (longlong *)0x0) {
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
                if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar2 = _pthread_getspecific(pVar4);
                plVar6 = local_70;
                if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar7 = plVar6, lVar3 != 0)
                   ) {
                  plVar7 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar7 + 0x478))();
                (**(code **)(*local_80 + 0x3f0))();
                local_f8 = *param_2;
                local_f0 = '\0';
                cVar1 = (**(code **)(*local_40 + 0x50))();
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
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
                if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0123b100();
              FUN_00b875e0();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar10 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      FUN_00136d50();
      plVar7 = local_48;
    }
    (**(code **)(*unaff_RDI + 0x498))();
    FUN_00cb1f10();
    FUN_00db3760();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x578))();
    FUN_00d403d0();
    local_c8 = DAT_026fce60;
    if (DAT_026fce60 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_a0 = 0;
    FUN_00d50b00();
    local_a0 = '\x01';
    local_b8 = 0;
    local_b0 = '\0';
    local_a8 = unaff_RDI;
    FUN_00d40470(&local_b8,&local_a8,1,3);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (plVar7 == (longlong *)0x0) goto LAB_00762486;
  }
  FUN_00d50b20();
LAB_00762486:
  return uVar8 & 0xffffffff;
}


