// Function: FUN_00494690
// Address: 00494690
// Size: 2854 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00494690(undefined4 param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  void *pvVar9;
  bool *pbVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *unaff_RDI;
  longlong **pplVar13;
  undefined4 uVar14;
  longlong *local_138;
  undefined1 local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  bool local_78 [8];
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  bool local_58 [8];
  longlong local_50;
  char local_48;
  longlong *local_40;
  
  lVar1 = DAT_026f6fb0;
  if (param_2 == 0) {
    FUN_01caeae0();
    plVar11 = local_70;
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar4 = DAT_02708758;
    plVar12 = (longlong *)0x0;
    if (plVar11 != (longlong *)0x0) {
      if (DAT_02708758 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      plVar11 = plVar4;
      if (((*(char *)((longlong)unaff_RDI + 0x27a) != '\0') &&
          (*(char *)((longlong)unaff_RDI + 0x279) != '\0')) ||
         ((cVar6 = FUN_00742b20(), cVar6 != '\0' && (*(char *)((longlong)unaff_RDI + 0x27b) == '\0')
          ))) {
        FUN_00490b50();
        plVar12 = local_70;
        if (local_70 != plVar4) {
          if (local_68[0] != '\0') {
            plVar11 = local_70;
            if (plVar4 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_00494b57;
          }
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar11 = plVar12;
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00494b57:
      plVar12 = DAT_02708760;
      if (DAT_02708760 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_c0 = plVar12;
      local_98 = plVar11;
      FUN_00083ea0(2,&local_c0);
      FUN_000b4da0();
      plVar4 = local_80;
      if (local_78[0] == false) {
        if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78[0] != false)) &&
           (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78[0] = false;
      }
      local_70 = (longlong *)&DAT_0253d630;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_70 = &DAT_024c5048;
      if ((local_58[0] != false) && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027087a8;
      if (DAT_027087a8 != 0) {
        FUN_00d50b00();
      }
      local_128 = lVar1;
      local_120 = '\x01';
      local_118 = plVar4;
      local_110 = '\0';
      FUN_01e57360(&local_118,&local_128);
      plVar12 = local_70;
      if (local_68[0] == '\0') {
        if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
           (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68[0] = '\0';
      }
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if (plVar12 != (longlong *)0x0) {
        FUN_01caeae0();
        local_108 = plVar12;
        local_100 = '\0';
        FUN_01d64eb0();
        if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') goto LAB_00494d1d;
  }
  else {
    if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
LAB_00494d1d:
      plVar12 = (longlong *)0x0;
      goto LAB_00494d1f;
    }
    if (DAT_026f6fb0 != 0) {
      param_1 = FUN_00d50b00();
    }
    lVar5 = DAT_027087a0;
    local_f8 = lVar1;
    local_f0 = '\x01';
    if (DAT_027087a0 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_e8 = lVar5;
    local_e0 = '\x01';
    FUN_01f6ca30(param_1,&local_e8);
    plVar11 = local_70;
    if (local_68[0] == '\0') {
      if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    local_b8 = plVar11;
    iVar8 = (**(code **)(*plVar11 + 0x5e0))();
    if ((iVar8 == 0) && (lVar1 = unaff_RDI[0x23], lVar1 != 0)) {
      plVar11 = unaff_RDI;
      FUN_00d50b00();
      local_c8 = lVar1;
      pvVar9 = _pthread_getspecific((pthread_key_t)plVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar13 = &local_70;
      FUN_01320d00();
      plVar11 = local_70;
      if ((DAT_026fdd70 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
      if (plVar11 == (longlong *)0x0) {
LAB_00494920:
        pplVar13 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_00494920;
      }
      local_88 = *pplVar13;
      if (*(char *)(pplVar13 + 1) == '\0') {
        if (local_88 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar13 + 1) = 0;
      }
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_88 == (longlong *)0x0) {
        bVar2 = true;
      }
      else {
        FUN_00d50b00();
        local_98 = (longlong *)((ulonglong)local_98 & 0xffffffffffffff00);
        local_80 = unaff_RDI;
        do {
          (**(code **)(*unaff_RDI + 0x370))();
          plVar11 = local_70;
          if (local_70 == unaff_RDI) {
            if ((((char)local_98 == '\0') && (local_70 != (longlong *)0x0)) && (local_68[0] != '\0')
               ) {
              plVar11 = unaff_RDI;
              goto LAB_00494a2d;
            }
          }
          else {
            local_80 = local_70;
            if (local_68[0] == '\0') {
              if ((char)local_98 == '\0') {
                pplVar13 = &local_98;
              }
              else {
                FUN_00d50b20();
                pplVar13 = &local_98;
              }
            }
            else {
              if ((char)local_98 != '\0') {
                FUN_00d50b20();
              }
LAB_00494a2d:
              local_98 = (longlong *)CONCAT71(local_98._1_7_,1);
              pplVar13 = (longlong **)local_68;
            }
            *(char *)pplVar13 = '\0';
            unaff_RDI = plVar11;
          }
          if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00082eb0();
          pplVar13 = (longlong **)&DAT_02802688;
          if (unaff_RDI != (longlong *)0x0) {
            (**(code **)(*unaff_RDI + 0x360))();
            cVar6 = FUN_00e85ea0();
            pplVar13 = &local_80;
            if (cVar6 == '\0') {
              pplVar13 = (longlong **)&DAT_02802688;
            }
          }
          if (*pplVar13 != (longlong *)0x0) {
            if (((char)local_98 == '\0') && (unaff_RDI != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            break;
          }
        } while (unaff_RDI != (longlong *)0x0);
        FUN_00d50b20();
        if (unaff_RDI == (longlong *)0x0) {
          bVar2 = true;
        }
        else {
          local_c0 = (longlong *)((ulonglong)local_c0 & 0xffffffffffffff00);
          local_68[0] = '\0';
          local_70 = (longlong *)0x0;
          FUN_00da5ad0();
          local_60 = local_80;
          if (local_78[0] == false) {
            pbVar10 = local_58;
          }
          else {
            pbVar10 = local_78;
          }
          local_58[0] = local_78[0] != false;
          *pbVar10 = false;
          if ((local_78[0] != false) && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_50 = FUN_00da7170();
          uVar14 = FUN_00da7180();
          if (local_60 == (longlong *)0x0) {
            local_40 = (longlong *)0x0;
            bVar3 = false;
          }
          else {
            bVar3 = false;
            local_40 = (longlong *)0x0;
            do {
              pvVar9 = _pthread_getspecific((pthread_key_t)pplVar13);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0123abe0();
              plVar11 = local_98;
              local_a8 = 0;
              if (local_90 == '\0') {
                if (local_98 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_90 = '\0';
              }
              plVar12 = local_40;
              local_a8 = '\x01';
              local_b0 = plVar11;
              uVar7 = FUN_00742b20();
              pplVar13 = (longlong **)0x0;
              FUN_01500530(0,uVar7);
              plVar11 = local_80;
              if (local_78[0] == false) {
                if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78[0] != false)) &&
                   (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_78[0] = false;
              }
              if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar11 != (longlong *)0x0) {
                local_d8 = local_88;
                local_d0 = '\0';
                pplVar13 = &local_c0;
                FUN_01502670(pplVar13,&local_d8);
                plVar11 = local_80;
                if (local_80 == plVar12) {
                  if ((!bVar3) && (local_80 != (longlong *)0x0)) {
                    plVar11 = plVar12;
                    if (local_78[0] != false) goto LAB_00494f74;
                    bVar3 = true;
                    FUN_00d50b00();
                  }
LAB_00494fbd:
                  if ((local_78[0] != false) && (local_80 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_78[0] == false) {
                    if (local_80 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    if ((bVar3) && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                      local_40 = plVar11;
                      bVar3 = true;
                    }
                    else {
                      local_40 = plVar11;
                      bVar3 = true;
                    }
                    goto LAB_00494fbd;
                  }
                  if ((bVar3) && (plVar12 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_00494f74:
                  local_78[0] = false;
                  bVar3 = true;
                  local_40 = plVar11;
                }
                if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
              uVar14 = FUN_00da7180();
              if (local_60 == (longlong *)0x0) break;
              local_60 = (longlong *)0x0;
              if (local_58[0] == false) {
                local_58[0] = false;
                break;
              }
              uVar14 = FUN_00d50b20();
              local_58[0] = false;
            } while (local_60 != (longlong *)0x0);
          }
          if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
            uVar14 = FUN_00d50b20();
          }
          if (local_40 == (longlong *)0x0) {
            bVar2 = true;
          }
          else {
            if ((char)local_c0 != '\0') {
              FUN_01f27fe0();
              uVar14 = (**(code **)(*local_70 + 0x560))();
              if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
            }
            local_138 = local_40;
            local_130 = 0;
            FUN_00493490(uVar14,&local_138);
            bVar2 = false;
            if (bVar3) {
              FUN_00d50b20();
              bVar2 = false;
            }
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar12 = (longlong *)0x0;
      if (local_b8 != (longlong *)0x0) goto LAB_00494787;
    }
    else {
      plVar12 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),iVar8 != 0);
      bVar2 = true;
LAB_00494787:
      FUN_00d50b20();
    }
    if (bVar2) goto LAB_00494d1f;
  }
  plVar12 = (longlong *)CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
LAB_00494d1f:
  return (ulonglong)plVar12 & 0xffffffff;
}


