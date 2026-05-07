// Function: FUN_01684680
// Address: 01684680
// Size: 3854 bytes
// Class: Unknown
// String references:
//   "tempoEntry != NULL"
//   "false && \"tempo reader returned non-ascending quarter positions\""
//   "false && \"tempo reader returned non-ascending time positions\""
//   "tempoEntriesCount >= 0"
//   "tempoEntriesCount != 1"
//   "signatureEntryCount > 0"
//   "signatureEntry != NULL"
//   "signatureEntry->position > lastPosition"

void*
FUN_01684680(uint64_t param_1,uint64_t param_2,uint32_t param_3,int64_t *param_4)

{
  double *pdVar1;
  void*puVar2;
  double dVar3;
  int iVar4;
  uint32_t uVar5;
  void* pVar6;
  void*puVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  void*puVar14;
  double *pdVar15;
  uint64_t uVar16;
  void *pvVar17;
  int64_t lVar18;
  void*puVar19;
  int64_t *plVar20;
  uint uVar21;
  void* pVar22;
  char *pcVar23;
  char cVar24;
  int64_t arg1;
  void*this_ptr;
  int iVar25;
  uint uVar26;
  bool bVar27;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar28;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar29;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  double dVar30;
  int64_t *local_res8;
  int64_t local_d0;
  char local_c8;
  double local_c0;
  int64_t *local_b8;
  int64_t local_b0;
  uint64_t local_a8;
  int64_t *local_a0;
  char local_98;
  uint64_t local_90;
  uint32_t local_84;
  int64_t *local_68;
  char local_60;
  double local_48;
  double local_38;
  
  plVar20 = *(int64_t **)(*(int64_t *)(arg1 + 0x30) + 0x28);
  local_b0 = *(int64_t *)(*(int64_t *)(arg1 + 0x30) + 0x30);
  local_b8 = plVar20;
  local_90 = param_1;
  if ((param_4 != (int64_t *)0x0) && (*param_4 != 0)) {
    *param_4 = 0;
    if ((char)param_4[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(param_4 + 1) = 0;
  }
  if ((local_res8 != (int64_t *)0x0) && (*local_res8 != 0)) {
    *local_res8 = 0;
    if ((char)local_res8[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(local_res8 + 1) = 0;
  }
  uVar12 = (**(code **)(local_b0 + 0x38))();
  if ((int)uVar12 < 0) {
    pcVar23 = "tempoEntriesCount >= 0";
  }
  else {
    if (uVar12 != 1) {
      if ((int)uVar12 < 2) goto LAB_01684756;
      uVar28 = extraout_XMM0_Da;
      local_84 = param_3;
      if (param_4 != (int64_t *)0x0) {
        puVar14 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        plVar20 = (int64_t *)&g_025683c0;
        *puVar14 = &g_025683c0;
        (*g_025683d8)();
        FUN_00c92170();
        puVar7 = (void*)*param_4;
        if (puVar7 == puVar14) {
          if ((char)param_4[1] == '\0') goto LAB_016847ec;
          FUN_00d50b20();
        }
        else {
          *param_4 = (int64_t)puVar14;
          if (((char)param_4[1] != '\0') && (puVar7 != (void*)0x0)) {
            FUN_00d50b20();
          }
LAB_016847ec:
          *(void*)(param_4 + 1) = 1;
        }
        uVar28 = FUN_00c8e7d0();
      }
      if (uVar12 != 2) {
        uVar28 = FUN_01908400();
        if (local_68 == (int64_t *)0x0) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
          if (local_60 == '\0') {
            uVar28 = FUN_00d50b00();
          }
        }
        pdVar15 = (double *)
                  (**(code **)(*(int64_t *)(*(int64_t *)(arg1 + 0x30) + 0x30) + 0x40))
                            (uVar28,0);
        if (pdVar15 == (double *)0x0) {
          FUN_016aea20(extraout_XMM0_Da_02,"tempoEntry != NULL");
          if (param_4 != (int64_t *)0x0) {
            if (*param_4 != 0) {
              *param_4 = 0;
              if ((char)param_4[1] != '\0') {
                FUN_00d50b20();
              }
              *(void*)(param_4 + 1) = 0;
            }
            if (*param_4 != 0) {
              *param_4 = 0;
              if ((char)param_4[1] != '\0') {
                FUN_00d50b20();
              }
              goto LAB_01684e5a;
            }
          }
          goto LAB_01684e62;
        }
        local_a8 = param_2;
        if (param_4 == (int64_t *)0x0) {
          local_48 = *pdVar15;
          uVar26 = 2;
          local_38 = pdVar15[1];
          do {
            local_c0 = local_48;
            pdVar15 = (double *)
                      (**(code **)(*(int64_t *)(*(int64_t *)(arg1 + 0x30) + 0x30) + 0x40))
                                (SUB84(local_48,0),uVar26 - 1);
            uVar28 = extraout_XMM0_Da_04;
            if (pdVar15 == (double *)0x0) goto LAB_01684d40;
            dVar3 = pdVar15[1];
            uVar28 = SUB84(local_38,0);
            if (dVar3 - local_38 <= 0.0) goto LAB_01684dae;
            local_48 = *pdVar15;
            if (local_48 - local_c0 <= 0.0) goto LAB_01684df3;
            if (NAN((local_48 - local_c0) / (dVar3 - local_38))) goto LAB_01684e37;
            local_a0 = local_68;
            local_98 = '\0';
            uVar28 = FUN_01908480(local_68,uVar26 == uVar12,dVar3,local_48);
            if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
              uVar28 = FUN_00d50b20();
            }
            uVar21 = uVar26 + 1;
            bVar27 = uVar26 != uVar12;
            uVar26 = uVar21;
            local_38 = dVar3;
          } while (bVar27);
        }
        else {
          lVar18 = *param_4;
          iVar13 = *(int *)(lVar18 + 0x18);
          FUN_00c8e340(extraout_XMM0_Da_02,1);
          dVar3 = pdVar15[1];
          pdVar1 = (double *)(*(int64_t *)(lVar18 + 0x10) + (int64_t)iVar13);
          *pdVar1 = *pdVar15;
          pdVar1[1] = dVar3;
          local_48 = *pdVar15;
          uVar26 = 2;
          local_38 = pdVar15[1];
          do {
            local_c0 = local_48;
            pdVar15 = (double *)
                      (**(code **)(*(int64_t *)(*(int64_t *)(arg1 + 0x30) + 0x30) + 0x40))
                                (SUB84(local_48,0),uVar26 - 1);
            uVar28 = extraout_XMM0_Da_03;
            if (pdVar15 == (double *)0x0) goto LAB_01684d40;
            lVar18 = *param_4;
            iVar13 = *(int *)(lVar18 + 0x18);
            FUN_00c8e340(extraout_XMM0_Da_03,1);
            dVar3 = pdVar15[1];
            pdVar1 = (double *)(*(int64_t *)(lVar18 + 0x10) + (int64_t)iVar13);
            *pdVar1 = *pdVar15;
            pdVar1[1] = dVar3;
            dVar3 = pdVar15[1];
            uVar28 = SUB84(local_38,0);
            if (dVar3 - local_38 <= 0.0) goto LAB_01684dae;
            local_48 = *pdVar15;
            if (local_48 - local_c0 <= 0.0) goto LAB_01684df3;
            if (NAN((local_48 - local_c0) / (dVar3 - local_38))) goto LAB_01684e37;
            local_a0 = local_68;
            local_98 = '\0';
            uVar28 = FUN_01908480(local_68,uVar26 == uVar12,dVar3,local_48);
            if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
              uVar28 = FUN_00d50b20();
            }
            uVar21 = uVar26 + 1;
            bVar27 = uVar26 != uVar12;
            uVar26 = uVar21;
            local_38 = dVar3;
          } while (bVar27);
        }
        plVar20 = (int64_t *)(uint64_t)uVar21;
        cVar24 = (char)local_84;
LAB_01684f1a:
        local_d0 = 0;
        local_c8 = '\0';
        FUN_016c2780(uVar28,&local_d0);
        if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        pVar22 = (void*)plVar20;
        pVar6 = (void*)local_68;
        if (cVar24 == '\0') {
LAB_01685087:
          pvVar17 = _pthread_getspecific(pVar22);
          if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
            pVar22 = pVar6;
          }
          FUN_016caa50();
          pvVar17 = _pthread_getspecific(pVar22);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar16 = FUN_00e7bdb0();
          FUN_016c3060(uVar16,4,0);
          pVar22 = (void*)uVar16;
          pvVar17 = _pthread_getspecific(pVar22);
          if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
            pVar22 = pVar6;
          }
          FUN_016c30e0();
          pvVar17 = _pthread_getspecific(pVar22);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c3130();
        }
        else {
          iVar13 = (**(code **)(local_b0 + 0x38))();
          pVar22 = (void*)plVar20;
          if (iVar13 < 1) {
            FUN_016aea20(extraout_XMM0_Da_05,"signatureEntryCount > 0");
            goto LAB_01685087;
          }
          if (local_res8 != (int64_t *)0x0) {
            puVar14 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar14 = &g_025683c0;
            (*g_025683d8)();
            FUN_00c92170();
            puVar7 = (void*)*local_res8;
            plVar20 = local_res8;
            if (puVar7 == puVar14) {
              if ((char)local_res8[1] == '\0') goto LAB_016851b3;
              FUN_00d50b20();
            }
            else {
              *local_res8 = (int64_t)puVar14;
              if (((char)local_res8[1] != '\0') && (puVar7 != (void*)0x0)) {
                FUN_00d50b20();
              }
LAB_016851b3:
              *(void*)(local_res8 + 1) = 1;
            }
            FUN_00c8e7d0();
          }
          pvVar17 = _pthread_getspecific((void*)plVar20);
          if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
            plVar20 = local_68;
          }
          FUN_016caa50();
          uVar28 = SUB84(g_023b4830,0);
          if (local_res8 == (int64_t *)0x0) {
            local_48 = g_023b4830;
            iVar25 = 0;
            do {
              pVar22 = (void*)plVar20;
              lVar18 = (**(code **)(local_b0 + 0x40))(uVar28,iVar25);
              if (lVar18 == 0) {
                FUN_016aea20(extraout_XMM0_Da_07,"signatureEntry != NULL");
              }
              dVar3 = *(double *)(lVar18 + 8);
              uVar28 = SUB84(dVar3,0);
              uVar29 = (uint32_t)((uint64_t)dVar3 >> 0x20);
              if (dVar3 <= local_48) {
                FUN_016aea20(uVar28,"signatureEntry->position > lastPosition");
                uVar28 = (uint32_t)*(void*)(lVar18 + 8);
                uVar29 = (uint32_t)((uint64_t)*(void*)(lVar18 + 8) >> 0x20);
              }
              if ((double)CONCAT44(uVar29,uVar28) <= local_48) goto LAB_016854b5;
              FUN_00e7bcc0();
              pvVar17 = _pthread_getspecific(pVar22);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar5 = *(void*)(lVar18 + 4);
              plVar20 = (int64_t *)FUN_00e7cd00((int)*(void*)(lVar18 + 8));
              FUN_016c3060(plVar20,uVar5,0);
              pVar22 = (void*)plVar20;
              iVar25 = iVar25 + 1;
              local_48 = (double)CONCAT44(uVar29,uVar28);
            } while (iVar13 != iVar25);
          }
          else {
            local_48 = g_023b4830;
            iVar25 = 0;
            do {
              pVar22 = (void*)plVar20;
              puVar19 = (void*)(**(code **)(local_b0 + 0x40))(uVar28,iVar25);
              if (puVar19 == (void*)0x0) {
                FUN_016aea20(extraout_XMM0_Da_06,"signatureEntry != NULL");
              }
              dVar3 = *(double *)(puVar19 + 2);
              uVar28 = SUB84(dVar3,0);
              uVar29 = (uint32_t)((uint64_t)dVar3 >> 0x20);
              if (dVar3 <= local_48) {
                FUN_016aea20(uVar28,"signatureEntry->position > lastPosition");
                uVar28 = (uint32_t)*(void*)(puVar19 + 2);
                uVar29 = (uint32_t)((uint64_t)*(void*)(puVar19 + 2) >> 0x20);
              }
              if ((double)CONCAT44(uVar29,uVar28) <= local_48) goto LAB_016854b5;
              lVar18 = *local_res8;
              iVar4 = *(int *)(lVar18 + 0x18);
              FUN_00c8e340(uVar28,1);
              uVar5 = puVar19[1];
              uVar8 = puVar19[2];
              uVar9 = puVar19[3];
              puVar2 = (void*)(*(int64_t *)(lVar18 + 0x10) + (int64_t)iVar4);
              *puVar2 = *puVar19;
              puVar2[1] = uVar5;
              puVar2[2] = uVar8;
              puVar2[3] = uVar9;
              FUN_00e7bcc0();
              pvVar17 = _pthread_getspecific(pVar22);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar5 = puVar19[1];
              plVar20 = (int64_t *)FUN_00e7cd00((int)*(void*)(puVar19 + 2));
              FUN_016c3060(plVar20,uVar5,0);
              pVar22 = (void*)plVar20;
              iVar25 = iVar25 + 1;
              local_48 = (double)CONCAT44(uVar29,uVar28);
            } while (iVar13 != iVar25);
          }
          pvVar17 = _pthread_getspecific(pVar22);
          if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
            pVar22 = pVar6;
          }
          FUN_016c30e0();
          pvVar17 = _pthread_getspecific(pVar22);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c3130();
        }
        *this_ptr = local_68;
        *(void*)(this_ptr + 1) = 1;
        goto LAB_01684e71;
      }
      pdVar15 = (double *)
                (**(code **)(*(int64_t *)(*(int64_t *)(arg1 + 0x30) + 0x30) + 0x40))
                          (uVar28,0);
      uVar28 = extraout_XMM0_Da_00;
      if (pdVar15 == (double *)0x0) {
LAB_016849a6:
        FUN_016aea20(uVar28,"tempoEntry != NULL");
        if (param_4 == (int64_t *)0x0) goto LAB_01684756;
        if (*param_4 != 0) goto LAB_01684ec7;
      }
      else {
        if (param_4 != (int64_t *)0x0) {
          lVar18 = *param_4;
          iVar13 = *(int *)(lVar18 + 0x18);
          FUN_00c8e340(extraout_XMM0_Da_00,1);
          dVar3 = pdVar15[1];
          pdVar1 = (double *)(*(int64_t *)(lVar18 + 0x10) + (int64_t)iVar13);
          *pdVar1 = *pdVar15;
          pdVar1[1] = dVar3;
        }
        dVar3 = *pdVar15;
        dVar30 = pdVar15[1];
        uVar29 = SUB84(dVar30,0);
        pdVar15 = (double *)
                  (**(code **)(*(int64_t *)(*(int64_t *)(arg1 + 0x30) + 0x30) + 0x40))
                            (uVar29,1);
        uVar28 = extraout_XMM0_Da_01;
        if (pdVar15 == (double *)0x0) goto LAB_016849a6;
        if (param_4 != (int64_t *)0x0) {
          lVar18 = *param_4;
          iVar13 = *(int *)(lVar18 + 0x18);
          FUN_00c8e340(extraout_XMM0_Da_01,1);
          dVar10 = pdVar15[1];
          pdVar1 = (double *)(*(int64_t *)(lVar18 + 0x10) + (int64_t)iVar13);
          *pdVar1 = *pdVar15;
          pdVar1[1] = dVar10;
        }
        dVar30 = pdVar15[1] - dVar30;
        if (dVar30 <= 0.0) {
          pcVar23 = "false && \"tempo reader returned non-ascending quarter positions\"";
LAB_01684e9f:
          FUN_016aea20(uVar29,pcVar23);
          if (param_4 == (int64_t *)0x0) goto LAB_01684756;
          if (*param_4 == 0) goto LAB_01684ee4;
LAB_01684ec7:
          *param_4 = 0;
          if ((char)param_4[1] != '\0') {
            FUN_00d50b20();
          }
          *(void*)(param_4 + 1) = 0;
        }
        else {
          if (*pdVar15 - dVar3 <= 0.0) {
            pcVar23 = "false && \"tempo reader returned non-ascending time positions\"";
            goto LAB_01684e9f;
          }
          if (!NAN((*pdVar15 - dVar3) / dVar30)) {
            uVar28 = FUN_01907d60();
            cVar24 = (char)local_84;
            if (local_68 == (int64_t *)0x0) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
              if (local_60 == '\0') {
                uVar28 = FUN_00d50b00();
              }
            }
            goto LAB_01684f1a;
          }
          if (param_4 == (int64_t *)0x0) goto LAB_01684756;
        }
      }
LAB_01684ee4:
      if (*param_4 != 0) {
        *param_4 = 0;
        if ((char)param_4[1] != '\0') {
          FUN_00d50b20();
        }
        *(void*)(param_4 + 1) = 0;
      }
      goto LAB_01684756;
    }
    pcVar23 = "tempoEntriesCount != 1";
  }
  FUN_016aea20(extraout_XMM0_Da,pcVar23);
LAB_01684756:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
LAB_01684d40:
  FUN_016aea20(uVar28,"tempoEntry != NULL");
  if (param_4 != (int64_t *)0x0) {
    if (*param_4 != 0) {
      *param_4 = 0;
      if ((char)param_4[1] != '\0') {
        FUN_00d50b20();
      }
      *(void*)(param_4 + 1) = 0;
    }
    if (*param_4 != 0) {
      *param_4 = 0;
      if ((char)param_4[1] != '\0') {
        FUN_00d50b20();
      }
      goto LAB_01684e5a;
    }
  }
  goto LAB_01684e62;
LAB_01684dae:
  FUN_016aea20(uVar28,"false && \"tempo reader returned non-ascending quarter positions\"");
  if (param_4 != (int64_t *)0x0) {
    if (*param_4 != 0) {
      *param_4 = 0;
      if ((char)param_4[1] != '\0') {
        FUN_00d50b20();
      }
      goto LAB_01684e2e;
    }
    goto LAB_01684e40;
  }
  goto LAB_01684e62;
LAB_01684df3:
  FUN_016aea20(uVar28,"false && \"tempo reader returned non-ascending time positions\"");
  if (param_4 != (int64_t *)0x0) {
    if (*param_4 != 0) {
      *param_4 = 0;
      if ((char)param_4[1] != '\0') {
        FUN_00d50b20();
      }
LAB_01684e2e:
      *(void*)(param_4 + 1) = 0;
    }
    goto LAB_01684e40;
  }
  goto LAB_01684e62;
LAB_016854b5:
  if ((param_4 != (int64_t *)0x0) && (*param_4 != 0)) {
    *param_4 = 0;
    if ((char)param_4[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(param_4 + 1) = 0;
  }
  if ((local_res8 != (int64_t *)0x0) && (*local_res8 != 0)) {
    *local_res8 = 0;
    if ((char)local_res8[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(local_res8 + 1) = 0;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  if (local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01684e71;
LAB_01684e37:
  if (param_4 != (int64_t *)0x0) {
LAB_01684e40:
    if (*param_4 != 0) {
      *param_4 = 0;
      if ((char)param_4[1] != '\0') {
        FUN_00d50b20();
      }
LAB_01684e5a:
      *(void*)(param_4 + 1) = 0;
    }
  }
LAB_01684e62:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01684e71:
  if ((bVar11) && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

