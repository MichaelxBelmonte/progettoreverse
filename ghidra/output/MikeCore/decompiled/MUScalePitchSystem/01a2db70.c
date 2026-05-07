// Function: FUN_01a2db70
// Address: 01a2db70
// Size: 2493 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"


/* WARNING: Removing unreachable block (ram,0x01a2dca2) */
/* WARNING: Removing unreachable block (ram,0x01a2dcae) */
/* WARNING: Removing unreachable block (ram,0x01a2dd07) */
/* WARNING: Removing unreachable block (ram,0x01a2dd30) */
/* WARNING: Removing unreachable block (ram,0x01a2dd09) */
/* WARNING: Removing unreachable block (ram,0x01a2dd32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a2db70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  void *pvVar10;
  pthread_key_t pVar11;
  longlong lVar12;
  longlong **pplVar13;
  longlong *plVar14;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  longlong local_88;
  char local_80;
  int local_70;
  longlong local_60;
  char local_58;
  float local_4c;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  FUN_01a296f0(param_1,0,param_3,param_4,0);
  iVar5 = (**(code **)(&UNK_00001588 + *(longlong *)*unaff_RDI))();
  if (iVar5 != 4) {
    (**(code **)(&UNK_00001580 + *(longlong *)*unaff_RDI))();
  }
  FUN_01a295a0();
  lVar1 = *unaff_RSI;
  if (lVar1 == local_88) {
    if (((char)unaff_RSI[1] != '\0') || (local_88 == 0)) {
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01a2dc99;
    }
    if (local_80 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    lVar9 = unaff_RSI[1];
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_88;
      if (((char)lVar9 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = local_88;
      if (((char)lVar9 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01a2dc99:
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    local_70 = -1;
    while( true ) {
      lVar9 = (longlong)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) break;
      lVar12 = *(longlong *)(lVar1 + 0x10);
      lVar9 = *(longlong *)(lVar12 + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((pthread_key_t)lVar12);
      pVar11 = (pthread_key_t)lVar12;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_0125a2d0();
      if (cVar4 != '\0') {
        pvVar10 = _pthread_getspecific(pVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01263cf0();
        if (cVar4 == '\0') {
          pvVar10 = _pthread_getspecific(pVar11);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar15 = FUN_0125e930();
          local_38 = local_48;
          if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
              (uVar15 = FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
          local_58 = '\0';
          local_60 = lVar9;
          FUN_019d4fe0(uVar15,&local_60);
          plVar2 = local_48;
          if ((DAT_027c0160 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
            _DAT_0270ab28 = FUN_0015ea50();
            _DAT_0270ab10 = "MUScalePitchSystem";
            _DAT_0270ab18 = 0x78;
            _DAT_0270ab20 = FUN_0015ecf0;
            _DAT_0270ab30 = 0;
            uRam000000000270ab38 = 0;
            _DAT_0270ab40 = 0;
            uRam000000000270ab48 = 0;
            _DAT_0270ab50 = 0;
            uRam000000000270ab58 = 0;
            _DAT_0270ab60 = 0;
            uRam000000000270ab68 = 0;
            _DAT_0270ab70 = 0;
            uRam000000000270ab78 = 0;
            _DAT_0270ab80 = 0;
            uRam000000000270ab88 = 0;
            _DAT_0270ab90 = 0;
            uRam000000000270ab98 = 0;
            _DAT_0270aba0 = 0;
            uRam000000000270aba8 = 0;
            _DAT_0270abb0 = 0;
            uRam000000000270abb8 = 0;
            _DAT_0270abc0 = 0;
            uRam000000000270abc8 = 0;
            _DAT_0270abd0 = 0;
            ___cxa_guard_release();
          }
          pplVar13 = (longlong **)&DAT_02802688;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x360))();
            cVar4 = FUN_00e85ea0();
            pplVar13 = &local_48;
            if (cVar4 == '\0') {
              pplVar13 = (longlong **)&DAT_02802688;
            }
          }
          plVar2 = *pplVar13;
          if (*(char *)(pplVar13 + 1) == '\0') {
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar13 + 1) = 0;
          }
          pVar11 = (pthread_key_t)pplVar13;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) {
            pvVar10 = _pthread_getspecific(pVar11);
            plVar14 = plVar2;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              plVar14 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            pvVar10 = _pthread_getspecific(pVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125dfa0();
            iVar6 = (**(code **)(*plVar14 + 0x3a8))();
            pvVar10 = _pthread_getspecific(pVar11);
            plVar14 = plVar2;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              plVar14 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            cVar4 = (**(code **)(*plVar14 + 0x438))();
            if (cVar4 == '\0') {
              pvVar10 = _pthread_getspecific(pVar11);
              plVar14 = plVar2;
              if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                plVar14 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
              }
              pvVar10 = _pthread_getspecific(pVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a2c0();
              iVar6 = (**(code **)(*plVar14 + 0x3b0))();
            }
            pvVar10 = _pthread_getspecific(pVar11);
            plVar14 = plVar2;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              plVar14 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            local_4c = (float)(**(code **)(*plVar14 + 0x3a0))();
            pvVar10 = _pthread_getspecific(pVar11);
            plVar14 = plVar2;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              plVar14 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            pvVar10 = _pthread_getspecific(pVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125dfa0();
            iVar7 = (**(code **)(*plVar14 + 0x3a8))();
            pvVar10 = _pthread_getspecific(pVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar15 = FUN_0125a2c0();
            uVar8 = iVar7 - iVar6;
            if (uVar8 != 0) {
              uVar3 = -uVar8;
              if (0 < (int)uVar8) {
                uVar3 = uVar8;
              }
              pvVar10 = _pthread_getspecific(pVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar16 = (float)FUN_0125dfa0();
              pVar11 = 0x241bdd0;
              fVar16 = *(float *)(&DAT_0241bdd0 + (ulonglong)(DAT_0239424c < fVar16 - local_4c) * 4)
              ;
              do {
                if (iVar7 == iVar6) goto LAB_01a2e378;
                pvVar10 = _pthread_getspecific(pVar11);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar17 = (float)FUN_0125a2c0();
                pvVar10 = _pthread_getspecific(pVar11);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a580((fVar17 - local_4c) + fVar16 + local_4c);
                pvVar10 = _pthread_getspecific(pVar11);
                plVar14 = plVar2;
                if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  plVar14 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                }
                pvVar10 = _pthread_getspecific(pVar11);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125dfa0();
                iVar7 = (**(code **)(*plVar14 + 0x3a8))();
                uVar8 = iVar7 - iVar6;
                pVar11 = -uVar8;
                if (0 < (int)uVar8) {
                  pVar11 = uVar8;
                }
              } while (pVar11 <= uVar3);
              pvVar10 = _pthread_getspecific(pVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a580(uVar15);
LAB_01a2e378:
              pvVar10 = _pthread_getspecific(pVar11);
              if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                pVar11 = (pthread_key_t)local_38;
              }
              FUN_0152ec70();
              pvVar10 = _pthread_getspecific(pVar11);
              if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                pVar11 = (pthread_key_t)local_38;
              }
              FUN_0152dc80();
            }
            pvVar10 = _pthread_getspecific(pVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152df60();
          }
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_38 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_001159b0();
  }
  if (iVar5 != 4) {
    (**(code **)(&UNK_00001580 + *(longlong *)*unaff_RDI))();
  }
  return;
}


