// Function: FUN_01917980
// Address: 01917980
// Size: 2140 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x019181cb) */
/* WARNING: Removing unreachable block (ram,0x019181d7) */
/* WARNING: Removing unreachable block (ram,0x01917f9a) */
/* WARNING: Removing unreachable block (ram,0x01917fa6) */
/* WARNING: Removing unreachable block (ram,0x01917b73) */
/* WARNING: Removing unreachable block (ram,0x01917b7f) */
/* WARNING: Removing unreachable block (ram,0x01917a29) */
/* WARNING: Removing unreachable block (ram,0x01917a32) */
/* WARNING: Removing unreachable block (ram,0x019179d2) */
/* WARNING: Removing unreachable block (ram,0x019179db) */
/* WARNING: Removing unreachable block (ram,0x01917acf) */
/* WARNING: Removing unreachable block (ram,0x01917adc) */
/* WARNING: Removing unreachable block (ram,0x01917e57) */
/* WARNING: Removing unreachable block (ram,0x01917e74) */
/* WARNING: Removing unreachable block (ram,0x01917e59) */
/* WARNING: Removing unreachable block (ram,0x01917e76) */

ulonglong FUN_01917980(undefined8 param_1,longlong *param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  pthread_key_t pVar10;
  longlong *plVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  longlong *plVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float extraout_XMM0_Db;
  undefined8 uVar17;
  longlong local_b0;
  char local_a8;
  undefined4 local_98;
  float fStack_94;
  longlong local_80;
  char local_78;
  longlong *local_60;
  char local_58;
  int local_48;
  longlong *local_38;
  float fVar18;
  
  plVar4 = local_60;
  if (*param_2 == 0) {
    uVar9 = 0;
  }
  else {
    FUN_01a58dc0();
    if (local_60 == (longlong *)0x0) {
      bVar3 = true;
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = local_60;
      if (local_58 == '\0') {
        FUN_00d50b00();
        bVar3 = false;
      }
      else {
        bVar3 = false;
      }
    }
    (**(code **)(*plVar13 + 0x7b0))();
    if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *plVar13))();
    if (cVar5 == '\0') {
      bVar2 = false;
      local_38 = (longlong *)0x0;
      uVar9 = 0;
    }
    else {
      iVar6 = FUN_01d3a5a0();
      uVar14 = extraout_XMM0_Da;
      if ((iVar6 == 1) && (iVar6 = FUN_01d3b630(), uVar14 = extraout_XMM0_Da_00, iVar6 == 1)) {
        FUN_01d3abf0();
        FUN_01e466c0();
        (**(code **)(*plVar13 + 0xe30))();
        local_38 = local_60;
        plVar11 = local_60;
        if (local_60 == (longlong *)0x0) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          if (local_58 == '\0') {
            FUN_00d50b00();
          }
        }
        iVar6 = FUN_01d3b620();
        if (iVar6 == 2) {
          if (local_60 != (longlong *)0x0) {
            for (lVar12 = 0; (int)lVar12 < *(int *)((longlong)local_60 + 0xc); lVar12 = lVar12 + 1)
            {
              unaff_RSI = *(longlong **)(local_60[2] + lVar12 * 8);
              pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                unaff_RSI = (longlong *)unaff_RSI[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0126cd60();
              FUN_0126cd10();
            }
            FUN_001159b0();
          }
          uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
          (**(code **)(*unaff_RDI + 0x458))();
        }
        else {
          FUN_01cf74c0();
          fStack_94 = extraout_XMM0_Db;
          while( true ) {
            (**(code **)(*plVar13 + 0x658))();
            plVar11 = (longlong *)*unaff_RSI;
            if (plVar11 != local_60) break;
            if (((char)unaff_RSI[1] == '\0') && (local_60 != (longlong *)0x0)) {
              if (local_58 == '\0') {
                FUN_00d50b00();
                goto LAB_01917d74;
              }
LAB_01917d32:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              local_58 = '\0';
            }
            if (*unaff_RSI == 0) goto LAB_0191818a;
LAB_01917d85:
            iVar6 = FUN_01d3a5a0();
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar6 == 6) goto LAB_0191819e;
            iVar6 = FUN_01d3a5a0();
            if (iVar6 == 5) {
              FUN_01d3abf0();
              uVar17 = FUN_01e466c0();
              fVar18 = (float)((ulonglong)uVar17 >> 0x20);
              (**(code **)(*plVar13 + 3000))();
              uVar9 = FUN_01d3b590();
              if (plVar4 != (longlong *)0x0) {
                local_58 = '\0';
                local_60 = (longlong *)0x0;
                local_48 = -1;
                fVar1 = *(float *)(&DAT_0241aee0 + (ulonglong)((uVar9 & 8) == 0) * 4);
                while( true ) {
                  lVar12 = (longlong)local_48;
                  local_48 = local_48 + 1;
                  if (*(int *)((longlong)plVar4 + 0xc) <= local_48) break;
                  lVar8 = plVar4[2];
                  local_60 = *(longlong **)(lVar8 + 8 + lVar12 * 8);
                  pvVar7 = _pthread_getspecific((pthread_key_t)lVar8);
                  pVar10 = (pthread_key_t)lVar8;
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01265b60();
                  fVar15 = (float)FUN_00aea6b0();
                  fVar15 = fVar15 + (fStack_94 - fVar18) * fVar1;
                  fVar16 = 0.0;
                  if (0.0 <= fVar15) {
                    fVar16 = fVar15;
                  }
                  local_98 = FUN_00aea630(fVar16);
                  fVar16 = (float)FUN_00aea610(local_98);
                  if (DAT_02390434 < fVar16) {
                    local_98 = FUN_00aea5e0(DAT_02390434);
                  }
                  pvVar7 = _pthread_getspecific(pVar10);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01265b00(local_98);
                  cVar5 = FUN_0199be40();
                  if (cVar5 != '\0') {
                    (**(code **)((longlong)&linkedit_data_command_000013d8.cmd + *plVar13))();
                    pvVar7 = _pthread_getspecific(pVar10);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01265b00(local_98);
                    if ((local_78 != '\0') && (local_80 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  pvVar7 = _pthread_getspecific(pVar10);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125e930();
                  if ((local_78 != '\0') && (local_80 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_80 != 0) {
                    pvVar7 = _pthread_getspecific(pVar10);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0125e930();
                    pvVar7 = _pthread_getspecific(pVar10);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0152e890(local_98);
                    if ((local_78 != '\0') && (local_80 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                FUN_001159b0();
              }
              (**(code **)(*unaff_RDI + 0x458))();
              (**(code **)((longlong)&linkedit_data_command_000013e8.cmd + *plVar13))((int)uVar17);
              fStack_94 = fVar18;
            }
          }
          lVar12 = unaff_RSI[1];
          if (local_58 != '\0') {
            *unaff_RSI = (longlong)local_60;
            if (((char)lVar12 != '\0') && (plVar11 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01917d32;
          }
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RSI = (longlong)local_60;
          if (((char)lVar12 != '\0') && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01917d74:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          if (*unaff_RSI != 0) goto LAB_01917d85;
LAB_0191818a:
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_0191819e:
          FUN_0199eb40();
          uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
          FUN_01cf74c0();
        }
      }
      else {
        local_b0 = *param_2;
        local_a8 = '\0';
        uVar9 = FUN_01a58d30(uVar14,&local_b0);
        uVar9 = uVar9 & 0xffffffff;
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        local_38 = (longlong *)0x0;
        bVar2 = false;
      }
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar3 && plVar13 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return uVar9 & 0xffffffff;
}


