// Function: FUN_01ba40f0
// Address: 01ba40f0
// Size: 2679 bytes
// Class: MUTextFieldDragAndEditHandler


/* WARNING: Removing unreachable block (ram,0x01ba4851) */
/* WARNING: Removing unreachable block (ram,0x01ba485d) */
/* WARNING: Removing unreachable block (ram,0x01ba4b50) */
/* WARNING: Removing unreachable block (ram,0x01ba4b5c) */
/* WARNING: Removing unreachable block (ram,0x01ba4211) */
/* WARNING: Removing unreachable block (ram,0x01ba421a) */
/* WARNING: Removing unreachable block (ram,0x01ba438d) */
/* WARNING: Removing unreachable block (ram,0x01ba439a) */
/* WARNING: Removing unreachable block (ram,0x01ba41b7) */
/* WARNING: Removing unreachable block (ram,0x01ba41c0) */
/* WARNING: Removing unreachable block (ram,0x01ba4302) */
/* WARNING: Removing unreachable block (ram,0x01ba4597) */
/* WARNING: Removing unreachable block (ram,0x01ba45c0) */
/* WARNING: Removing unreachable block (ram,0x01ba4599) */
/* WARNING: Removing unreachable block (ram,0x01ba45c2) */
/* WARNING: Removing unreachable block (ram,0x01ba42e5) */

ulonglong FUN_01ba40f0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong *unaff_RBX;
  longlong *unaff_RSI;
  bool bVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar13;
  float fVar14;
  float extraout_XMM0_Db;
  undefined8 uVar15;
  float fVar16;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  undefined1 local_a8 [16];
  int local_94;
  longlong local_88;
  char local_80;
  longlong local_70;
  char local_68;
  longlong *local_58;
  char local_50;
  int local_40;
  
  plVar1 = local_58;
  local_b0 = param_2;
  uVar12 = FUN_01a58dc0();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar12 = FUN_00d50b00();
      goto LAB_01ba412f;
    }
    if (*local_b0 == 0) {
      uVar5 = 0;
      goto LAB_01ba4b6e;
    }
    goto LAB_01ba4ae8;
  }
LAB_01ba412f:
  if (*local_b0 == 0) {
    uVar5 = 0;
LAB_01ba4b61:
    if (plVar1 == (longlong *)0x0) goto LAB_01ba4b6e;
  }
  else {
    if (local_58 == (longlong *)0x0) {
LAB_01ba4ae8:
      local_c0 = *local_b0;
      local_b8 = '\0';
      uVar4 = FUN_01a58d30(uVar12,&local_c0);
      uVar5 = (ulonglong)uVar4;
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01ba4b61;
    }
    cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_58))();
    if (cVar2 != '\0') {
      iVar3 = FUN_01d3a5a0();
      uVar12 = extraout_XMM0_Da;
      if ((iVar3 == 1) && (iVar3 = FUN_01d3b630(), uVar12 = extraout_XMM0_Da_00, iVar3 == 1)) {
        (**(code **)(*local_58 + 0x7b0))();
        if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01d3abf0();
        FUN_01e466c0();
        (**(code **)(*local_58 + 0xe30))();
        if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        local_94 = FUN_01d3b620();
        if (local_94 == 2) {
          uVar12 = extraout_XMM0_Da_01;
          if (local_58 != (longlong *)0x0) {
            local_40 = -1;
            local_a8 = ZEXT816(0);
            iVar3 = 0;
            while (local_40 = local_40 + 1, local_40 < *(int *)((longlong)local_58 + 0xc)) {
              pvVar8 = _pthread_getspecific((pthread_key_t)local_58[2]);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar13 = (float)FUN_012660a0();
              local_a8._0_4_ = (float)local_a8._0_4_ + fVar13;
              iVar3 = iVar3 + -1;
            }
            plVar7 = local_58;
            FUN_001159b0();
            if (iVar3 == 0) {
              local_a8 = ZEXT816(0);
            }
            else {
              local_a8 = ZEXT416((uint)DAT_02390d00 &
                                 -(uint)((float)local_a8._0_4_ / (float)-iVar3 < DAT_0239011c) &
                                 -(uint)(DAT_02390118 < (float)local_a8._0_4_ / (float)-iVar3));
            }
            if (0 < *(int *)((longlong)local_58 + 0xc)) {
              iVar3 = 0;
              do {
                pvVar8 = _pthread_getspecific((pthread_key_t)plVar7);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01264240();
                if (local_70 == 0) {
                  cVar2 = '\0';
                }
                else {
                  pvVar8 = _pthread_getspecific((pthread_key_t)plVar7);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01264240();
                  pvVar8 = _pthread_getspecific((pthread_key_t)plVar7);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar2 = FUN_01334f30();
                  if ((local_80 != '\0') && (local_88 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_68 != '\0') && (local_70 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar2 != '\0') {
                  pvVar8 = _pthread_getspecific((pthread_key_t)plVar7);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01266020(local_a8._0_4_);
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)((longlong)local_58 + 0xc));
            }
            FUN_001159b0();
LAB_01ba4ac4:
            uVar12 = FUN_00d50b20();
            unaff_RBX = plVar1;
          }
        }
        else {
          FUN_01cf74c0();
          while( true ) {
            (**(code **)(*plVar1 + 0x658))();
            plVar7 = (longlong *)*unaff_RSI;
            if (plVar7 != local_58) break;
            if (((char)unaff_RSI[1] == '\0') && (local_58 != (longlong *)0x0)) {
              if (local_50 == '\0') {
                FUN_00d50b00();
                goto LAB_01ba44b0;
              }
LAB_01ba4467:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              local_50 = '\0';
            }
            if (*unaff_RSI == 0) goto LAB_01ba48dc;
LAB_01ba44c8:
            iVar3 = FUN_01d3a5a0();
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar3 == 6) goto LAB_01ba48f0;
            iVar3 = FUN_01d3a5a0();
            if (iVar3 == 5) {
              FUN_01d3abf0();
              uVar15 = FUN_01e466c0();
              uVar5 = FUN_01d3b590();
              if (plVar1 != (longlong *)0x0) {
                local_50 = '\0';
                local_58 = (longlong *)0x0;
                local_40 = -1;
                fVar13 = *(float *)(&DAT_0241dcb8 + (ulonglong)((uVar5 & 8) == 0) * 4);
                bVar11 = true;
                while( true ) {
                  lVar6 = (longlong)local_40;
                  local_40 = local_40 + 1;
                  if (*(int *)((longlong)plVar1 + 0xc) <= local_40) break;
                  lVar10 = plVar1[2];
                  local_58 = *(longlong **)(lVar10 + 8 + lVar6 * 8);
                  if (bVar11) {
                    pvVar8 = _pthread_getspecific((pthread_key_t)lVar10);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    plVar7 = (longlong *)FUN_00e8b990();
                    lVar10 = *plVar7;
                    cVar2 = (**(code **)(lVar10 + 0x3c0))();
                    if (cVar2 != '\0') {
                      pvVar8 = _pthread_getspecific((pthread_key_t)lVar10);
                      if (pvVar8 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      plVar7 = (longlong *)FUN_00e8b990();
                      lVar10 = *plVar7;
                      (**(code **)(lVar10 + 0x3b8))();
                    }
                    bVar11 = false;
                  }
                  pVar9 = (pthread_key_t)lVar10;
                  pvVar8 = _pthread_getspecific(pVar9);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar12 = FUN_012660a0();
                  local_a8._0_4_ = uVar12;
                  pvVar8 = _pthread_getspecific(pVar9);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01264240();
                  if (local_70 == 0) {
                    cVar2 = '\0';
                  }
                  else {
                    pvVar8 = _pthread_getspecific(pVar9);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01264240();
                    pvVar8 = _pthread_getspecific(pVar9);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    cVar2 = FUN_01334f30();
                    if ((local_80 != '\0') && (local_88 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_68 != '\0') && (local_70 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar2 != '\0') {
                    pvVar8 = _pthread_getspecific(pVar9);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    fVar16 = (float)local_a8._0_4_ +
                             (extraout_XMM0_Db - (float)((ulonglong)uVar15 >> 0x20)) * fVar13;
                    fVar14 = DAT_02390124;
                    if (fVar16 <= DAT_02390124) {
                      fVar14 = fVar16;
                    }
                    fVar16 = DAT_02390d00;
                    if (DAT_02390d00 <= fVar14) {
                      fVar16 = fVar14;
                    }
                    local_a8._0_4_ = fVar16;
                    FUN_01266020(fVar16);
                    cVar2 = FUN_0199be40();
                    if (cVar2 != '\0') {
                      (**(code **)((longlong)&linkedit_data_command_000013d8.cmd + *plVar1))();
                      pvVar8 = _pthread_getspecific(pVar9);
                      if (pvVar8 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01266020(local_a8._0_4_);
                      if ((local_68 != '\0') && (local_70 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
                FUN_001159b0();
              }
              (**(code **)((longlong)&linkedit_data_command_000013e8.cmd + *plVar1))((int)uVar15);
            }
          }
          lVar6 = unaff_RSI[1];
          if (local_50 != '\0') {
            *unaff_RSI = (longlong)local_58;
            if (((char)lVar6 != '\0') && (plVar7 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01ba4467;
          }
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RSI = (longlong)local_58;
          if (((char)lVar6 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01ba44b0:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          if (*unaff_RSI != 0) goto LAB_01ba44c8;
LAB_01ba48dc:
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01ba48f0:
          uVar12 = FUN_01cf74c0();
          unaff_RBX = plVar1;
          if (plVar1 != (longlong *)0x0) goto LAB_01ba4ac4;
        }
        if (plVar1 != (longlong *)0x0) {
          uVar12 = FUN_00d50b20();
        }
        uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
        if (local_94 == 2) goto LAB_01ba4b61;
      }
      goto LAB_01ba4ae8;
    }
    uVar5 = 0;
  }
  FUN_00d50b20();
LAB_01ba4b6e:
  return uVar5 & 0xffffffff;
}


