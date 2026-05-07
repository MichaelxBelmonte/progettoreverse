// Function: FUN_0132a0a0
// Address: 0132a0a0
// Size: 3214 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0132a0a0(undefined8 param_1,undefined8 *param_2)

{
  double dVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  undefined8 *puVar6;
  double *pdVar7;
  longlong *unaff_RSI;
  bool bVar8;
  double dVar9;
  longlong local_160;
  char local_158;
  double local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  longlong local_130;
  char local_128;
  undefined8 local_120;
  undefined1 local_118;
  double local_110;
  undefined1 local_108;
  double local_100;
  undefined1 local_f8;
  longlong local_f0;
  int local_e8;
  int iStack_e4;
  int local_e0;
  longlong local_d8;
  char local_d0;
  double local_c8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_f0 = *unaff_RSI;
  if (local_f0 != 0) {
    local_f8 = 0;
    local_100 = 0.0;
    local_e8 = -1;
    iStack_e4 = 0;
    local_e0 = 0;
    do {
      do {
        do {
          if (iStack_e4 != 0) {
            if (iStack_e4 < 1) {
              iStack_e4 = -iStack_e4;
            }
            else {
              local_e8 = local_e8 - iStack_e4;
              FUN_00d23690();
              local_e0 = local_e0 + iStack_e4;
              iStack_e4 = 0;
            }
          }
          lVar2 = (longlong)local_e8;
          local_e8 = local_e8 + 1;
          if (*(int *)(local_f0 + 0xc) <= local_e8) goto LAB_0132ad3d;
          lVar5 = *(longlong *)(local_f0 + 0x10);
          dVar1 = *(double *)(lVar5 + 8 + lVar2 * 8);
          local_100 = dVar1;
          pvVar3 = _pthread_getspecific((pthread_key_t)lVar5);
          pVar4 = (pthread_key_t)lVar5;
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a560();
          if (local_60 == 0) {
            bVar8 = false;
          }
          else {
            local_c8 = dVar1;
            pvVar3 = _pthread_getspecific(pVar4);
            if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
              pVar4 = SUB84(local_c8,0);
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            if (local_80 == 0) {
              bVar8 = false;
              dVar1 = local_c8;
            }
            else {
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a560();
              if (local_50 == 0) {
                bVar8 = false;
                dVar1 = local_c8;
              }
              else {
                pvVar3 = _pthread_getspecific(pVar4);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a560();
                pvVar3 = _pthread_getspecific(pVar4);
                dVar1 = local_c8;
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef460();
                bVar8 = local_90 != 0;
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        } while (!bVar8);
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if (local_60 == 0) {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if (local_80 == 0) {
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc420();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            if (local_70 == local_d8) {
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_c8 = (double)FUN_01259520();
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar9 = (double)FUN_0125a280();
              bVar8 = (double)((ulonglong)(local_c8 - dVar9) & _DAT_023908f0) < DAT_02391030;
            }
            else {
              bVar8 = false;
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = false;
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar8 = false;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (bVar8) {
          local_148 = 0;
          local_140 = *param_2;
          local_138 = 0;
          puVar6 = &local_140;
          local_150 = dVar1;
          FUN_01329cf0(puVar6,&local_150);
          pVar4 = (pthread_key_t)puVar6;
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          lVar2 = local_60;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) goto LAB_0132ad3d;
        }
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if (local_60 == 0) {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          if (local_80 == 0) {
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc420();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            if (local_70 == local_d8) {
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_c8 = (double)FUN_01259520();
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar9 = (double)FUN_0125a280();
              bVar8 = (double)((ulonglong)(local_c8 - dVar9) & _DAT_023908f0) < DAT_02391030;
            }
            else {
              bVar8 = false;
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = false;
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar8 = false;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      } while (!bVar8);
      local_120 = *param_2;
      local_118 = 0;
      local_108 = 0;
      pdVar7 = &local_110;
      local_110 = dVar1;
      FUN_01329cf0(pdVar7,&local_120);
      pVar4 = (pthread_key_t)pdVar7;
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01270ab0();
      lVar2 = local_60;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    } while (lVar2 == 0);
LAB_0132ad3d:
    FUN_001159b0();
  }
  return;
}


