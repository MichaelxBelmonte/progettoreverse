// Function: FUN_0128a630
// Address: 0128a630
// Size: 5901 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0128ad2c) */
/* WARNING: Removing unreachable block (ram,0x0128ad35) */
/* WARNING: Removing unreachable block (ram,0x0128ae13) */
/* WARNING: Removing unreachable block (ram,0x0128ae1c) */

void FUN_0128a630(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  longlong unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_38;
  
  if ((*(longlong *)(unaff_RDI + 0x100) != 0) &&
     ((cVar5 = FUN_00d59e50(), cVar5 != '\0' || (cVar5 = FUN_00d59e50(), cVar5 != '\0')))) {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50b00();
    FUN_012ed8a0();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((*(longlong *)(unaff_RDI + 0x48) == 0) &&
       (FUN_0129a3b0(), *(longlong *)(unaff_RDI + 0x100) != 0)) {
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012ed0d0();
    }
  }
  plVar1 = (longlong *)(unaff_RDI + 0xa8);
  cVar5 = FUN_00d59e50();
  pVar10 = (pthread_key_t)param_1;
  if (cVar5 == '\0') {
    plVar2 = (longlong *)(unaff_RDI + 0xa0);
    cVar5 = FUN_00d59e50();
    pVar10 = (pthread_key_t)param_1;
    if (cVar5 != '\0') goto LAB_0128a788;
    cVar5 = FUN_00d59e50();
    if (cVar5 == '\0') {
      cVar5 = FUN_00d59e50();
      pVar10 = (pthread_key_t)param_1;
      if (cVar5 != '\0') goto LAB_0128a788;
      cVar5 = FUN_00d59e50();
      pVar10 = (pthread_key_t)param_1;
      if (cVar5 != '\0') goto LAB_0128a788;
      cVar5 = FUN_00d59e50();
      if (cVar5 != '\0') {
        FUN_00d64850();
        if (*(longlong *)(unaff_RDI + 0x1a8) != 0) {
          *(longlong *)(unaff_RDI + 0x1a8) = 0;
          FUN_00d50b20();
        }
        FUN_00d64910();
        FUN_0125f010();
        FUN_01268df0();
        FUN_00d64850();
        if (*(longlong *)(unaff_RDI + 400) != 0) {
          *(longlong *)(unaff_RDI + 400) = 0;
          FUN_00d50b20();
        }
        FUN_00d64910();
        FUN_0125f010();
        FUN_0125ef90();
        pVar10 = (pthread_key_t)param_1;
        if (*plVar1 == 0) {
LAB_0128b237:
          bVar4 = false;
LAB_0128b23d:
          local_38 = 0;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_012dff90();
          pVar10 = (pthread_key_t)param_1;
          if (cVar5 == '\0') goto LAB_0128b237;
          if (*(longlong *)(unaff_RDI + 0xa8) == 0) {
            local_48 = '\0';
            local_50 = 0;
LAB_0128b42b:
            bVar4 = false;
            local_38 = 0;
            if (local_48 != '\0') {
              local_38 = 0;
              bVar4 = false;
              if (local_50 != 0) {
                FUN_00d50b20();
              }
            }
LAB_0128b447:
            pVar10 = (pthread_key_t)param_1;
            if (local_38 != 0) goto LAB_0128b456;
            goto LAB_0128b23d;
          }
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          local_38 = local_50;
          param_1 = local_50;
          if (local_50 == 0) goto LAB_0128b42b;
          if (local_48 == '\0') {
            FUN_00d50b00();
            bVar4 = true;
            goto LAB_0128b447;
          }
          bVar4 = true;
LAB_0128b456:
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            param_1 = local_38;
          }
          FUN_01268df0();
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          lVar7 = local_38;
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = local_38;
            lVar7 = *(longlong *)(local_38 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          pVar10 = (pthread_key_t)param_1;
          FUN_00d64850();
          if (*(longlong *)(lVar7 + 400) != 0) {
            *(longlong *)(lVar7 + 400) = 0;
            FUN_00d50b20();
          }
          FUN_00d64910();
          FUN_0125f010();
          pvVar6 = _pthread_getspecific(pVar10);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            pVar10 = (pthread_key_t)local_38;
          }
          FUN_0125ef90();
        }
        if (*plVar2 != 0) {
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_012dff90();
          if (cVar5 != '\0') {
            if (*(longlong *)(unaff_RDI + 0xa0) == 0) {
              local_48 = '\0';
              local_50 = 0;
LAB_0128b606:
              bVar3 = true;
              lVar7 = 0;
              if (local_48 != '\0') {
                bVar3 = true;
                lVar7 = 0;
                if (local_50 != 0) {
                  FUN_00d50b20();
                }
              }
LAB_0128b622:
              if (lVar7 == 0) goto LAB_0128b703;
            }
            else {
              pvVar6 = _pthread_getspecific(pVar10);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              if (local_50 == 0) goto LAB_0128b606;
              lVar7 = local_50;
              if (local_48 == '\0') {
                FUN_00d50b00();
                bVar3 = false;
                goto LAB_0128b622;
              }
              bVar3 = false;
            }
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01268df0();
            pvVar6 = _pthread_getspecific(pVar10);
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            FUN_00d64850();
            if (*(longlong *)(lVar7 + 400) != 0) {
              *(longlong *)(lVar7 + 400) = 0;
              FUN_00d50b20();
            }
            FUN_00d64910();
            FUN_0125f010();
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125ef90();
            if (!bVar3) {
              FUN_00d50b20();
            }
          }
        }
LAB_0128b703:
        if ((bVar4) && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0128ac93;
      }
      cVar5 = FUN_00d59e50();
      pVar10 = (pthread_key_t)param_1;
      local_38 = local_50;
      if (cVar5 != '\0') {
        FUN_00d64850();
        if (*(longlong *)(unaff_RDI + 400) != 0) {
          *(longlong *)(unaff_RDI + 400) = 0;
          FUN_00d50b20();
        }
        FUN_00d64910();
        FUN_0125f010();
        pVar10 = (pthread_key_t)param_1;
        if (*plVar1 == 0) {
LAB_0128b394:
          bVar4 = false;
LAB_0128b39a:
          local_38 = 0;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_012dff90();
          pVar10 = (pthread_key_t)param_1;
          if (cVar5 == '\0') goto LAB_0128b394;
          if (*(longlong *)(unaff_RDI + 0xa8) == 0) {
            local_48 = '\0';
            local_50 = 0;
LAB_0128b732:
            local_38 = 0;
            bVar4 = false;
            if (local_48 != '\0') {
              bVar4 = false;
              local_38 = 0;
              if (local_50 != 0) {
                FUN_00d50b20();
              }
            }
LAB_0128b74b:
            pVar10 = (pthread_key_t)param_1;
            if (local_38 != 0) goto LAB_0128b75c;
            goto LAB_0128b39a;
          }
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          if (local_50 == 0) goto LAB_0128b732;
          if (local_48 == '\0') {
            FUN_00d50b00();
            bVar4 = true;
            goto LAB_0128b74b;
          }
          bVar4 = true;
LAB_0128b75c:
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          lVar7 = local_38;
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = local_38;
            lVar7 = *(longlong *)(local_38 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          pVar10 = (pthread_key_t)param_1;
          FUN_00d64850();
          if (*(longlong *)(lVar7 + 400) != 0) {
            *(longlong *)(lVar7 + 400) = 0;
            FUN_00d50b20();
          }
          FUN_00d64910();
          FUN_0125f010();
        }
        if (*plVar2 == 0) {
LAB_0128b876:
          bVar3 = false;
LAB_0128b87c:
          lVar7 = 0;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_012dff90();
          if (cVar5 == '\0') goto LAB_0128b876;
          if (*(longlong *)(unaff_RDI + 0xa0) == 0) {
            local_48 = '\0';
            local_50 = 0;
LAB_0128b894:
            lVar7 = 0;
            bVar3 = false;
            if (local_48 != '\0') {
              bVar3 = false;
              lVar7 = 0;
              if (local_50 != 0) {
                FUN_00d50b20();
              }
            }
LAB_0128b8b1:
            if (lVar7 != 0) goto LAB_0128b8b6;
            goto LAB_0128b87c;
          }
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
          if (local_50 == 0) goto LAB_0128b894;
          lVar7 = local_50;
          if (local_48 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
            goto LAB_0128b8b1;
          }
          bVar3 = true;
LAB_0128b8b6:
          pvVar6 = _pthread_getspecific(pVar10);
          lVar8 = lVar7;
          if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar8 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          FUN_00d64850();
          if (*(longlong *)(lVar8 + 400) != 0) {
            *(longlong *)(lVar8 + 400) = 0;
            FUN_00d50b20();
          }
          FUN_00d64910();
          FUN_0125f010();
        }
        if ((*(longlong *)(unaff_RDI + 0x48) == 0) &&
           (FUN_0129a3b0(), *(longlong *)(unaff_RDI + 0x100) != 0)) {
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012ed0d0();
        }
        if ((bVar3) && (lVar7 != 0)) {
          FUN_00d50b20();
        }
        if ((bVar4) && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0128ac93;
      }
      cVar5 = FUN_00d59e50();
      if (cVar5 != '\0') {
        FUN_01268df0();
        if (*plVar1 == 0) {
LAB_0128b40e:
          bVar4 = false;
LAB_0128b414:
          local_38 = 0;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_012dff90();
          if (cVar5 == '\0') goto LAB_0128b40e;
          if (*(longlong *)(unaff_RDI + 0xa8) == 0) {
            local_48 = '\0';
            local_50 = 0;
LAB_0128b9f4:
            local_38 = 0;
            bVar4 = false;
            if (local_48 != '\0') {
              bVar4 = false;
              local_38 = 0;
              if (local_50 != 0) {
                FUN_00d50b20();
              }
            }
LAB_0128ba0d:
            if (local_38 != 0) goto LAB_0128ba1e;
            goto LAB_0128b414;
          }
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          if (local_50 == 0) goto LAB_0128b9f4;
          if (local_48 == '\0') {
            FUN_00d50b00();
            bVar4 = true;
            goto LAB_0128ba0d;
          }
          bVar4 = true;
LAB_0128ba1e:
          pvVar6 = _pthread_getspecific(pVar10);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            pVar10 = (pthread_key_t)local_38;
          }
          FUN_01268df0();
        }
        if (*plVar2 == 0) {
LAB_0128bb08:
          bVar3 = false;
          lVar7 = 0;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_012dff90();
          if (cVar5 == '\0') goto LAB_0128bb08;
          if (*(longlong *)(unaff_RDI + 0xa0) == 0) {
            local_48 = '\0';
            local_50 = 0;
LAB_0128bb26:
            lVar7 = 0;
            bVar3 = false;
            if (local_48 != '\0') {
              lVar7 = 0;
              bVar3 = false;
              if (local_50 != 0) {
                FUN_00d50b20();
              }
            }
LAB_0128bb40:
            if (lVar7 != 0) goto LAB_0128bb45;
            lVar7 = 0;
          }
          else {
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            if (local_50 == 0) goto LAB_0128bb26;
            lVar7 = local_50;
            if (local_48 == '\0') {
              FUN_00d50b00();
              bVar3 = true;
              goto LAB_0128bb40;
            }
            bVar3 = true;
LAB_0128bb45:
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01268df0();
          }
        }
        if ((*(longlong *)(unaff_RDI + 0x48) == 0) &&
           (FUN_0129a3b0(), *(longlong *)(unaff_RDI + 0x100) != 0)) {
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012ed0d0();
        }
        if ((bVar3) && (lVar7 != 0)) {
          FUN_00d50b20();
        }
        if ((bVar4) && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0128ac93;
      }
      cVar5 = FUN_00d59e50();
      if ((((cVar5 == '\0') && (cVar5 = FUN_00d59e50(), cVar5 == '\0')) &&
          (cVar5 = FUN_00d59e50(), cVar5 == '\0')) && (cVar5 = FUN_00d59e50(), cVar5 == '\0')) {
        cVar5 = FUN_00d59e50();
        if ((((cVar5 == '\0') && (cVar5 = FUN_00d59e50(), cVar5 == '\0')) &&
            ((cVar5 = FUN_00d59e50(), cVar5 == '\0' &&
             ((cVar5 = FUN_00d59e50(), cVar5 == '\0' && (cVar5 = FUN_00d59e50(), cVar5 == '\0'))))))
           && (cVar5 = FUN_00d59e50(), cVar5 == '\0')) goto LAB_0128ac93;
        FUN_00d64850();
        if (*(longlong *)(unaff_RDI + 0x78) != 0) {
          *(undefined8 *)(unaff_RDI + 0x78) = 0;
          FUN_00d50b20();
        }
        FUN_00d64910();
        FUN_0125f010();
      }
      else {
        FUN_01268df0();
      }
      goto LAB_0128a790;
    }
    FUN_0125ef90();
    pVar10 = (pthread_key_t)param_1;
    if (*plVar1 == 0) {
LAB_0128ab48:
      bVar4 = false;
LAB_0128ab4e:
      local_38 = 0;
    }
    else {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_012dff90();
      pVar10 = (pthread_key_t)param_1;
      if (cVar5 == '\0') goto LAB_0128ab48;
      if (*(longlong *)(unaff_RDI + 0xa8) == 0) {
        local_48 = '\0';
        local_50 = 0;
LAB_0128b027:
        bVar4 = false;
        local_38 = 0;
        if (local_48 != '\0') {
          local_38 = 0;
          bVar4 = false;
          if (local_50 != 0) {
            FUN_00d50b20();
          }
        }
LAB_0128b047:
        pVar10 = (pthread_key_t)param_1;
        if (local_38 != 0) goto LAB_0128b052;
        goto LAB_0128ab4e;
      }
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      local_38 = local_50;
      param_1 = local_50;
      if (local_50 == 0) goto LAB_0128b027;
      if (local_48 == '\0') {
        FUN_00d50b00();
        bVar4 = true;
        goto LAB_0128b047;
      }
      bVar4 = true;
LAB_0128b052:
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = local_38;
      }
      FUN_0125ef90();
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      lVar7 = local_38;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = local_38;
        lVar7 = *(longlong *)(local_38 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      pVar10 = (pthread_key_t)param_1;
      if ((*(longlong *)(lVar7 + 0x48) == 0) && (FUN_0129a3b0(), *(longlong *)(lVar7 + 0x100) != 0))
      {
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012ed0d0();
      }
    }
    if (*plVar2 == 0) {
LAB_0128ac0a:
      bVar3 = false;
LAB_0128ac0d:
      lVar7 = 0;
    }
    else {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_012dff90();
      if (cVar5 == '\0') goto LAB_0128ac0a;
      if (*(longlong *)(unaff_RDI + 0xa0) == 0) {
        local_48 = '\0';
        local_50 = 0;
LAB_0128b13f:
        bVar3 = false;
        lVar7 = 0;
        if (local_48 != '\0') {
          bVar3 = false;
          lVar7 = 0;
          if (local_50 != 0) {
            FUN_00d50b20();
          }
        }
LAB_0128b159:
        if (lVar7 != 0) goto LAB_0128b162;
        goto LAB_0128ac0d;
      }
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      if (local_50 == 0) goto LAB_0128b13f;
      lVar7 = local_50;
      if (local_48 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
        goto LAB_0128b159;
      }
      bVar3 = true;
LAB_0128b162:
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125ef90();
      pvVar6 = _pthread_getspecific(pVar10);
      lVar8 = lVar7;
      if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        lVar8 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
      }
      if ((*(longlong *)(lVar8 + 0x48) == 0) && (FUN_0129a3b0(), *(longlong *)(lVar8 + 0x100) != 0))
      {
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012ed0d0();
      }
    }
    if ((*(longlong *)(unaff_RDI + 0x48) == 0) &&
       (FUN_0129a3b0(), *(longlong *)(unaff_RDI + 0x100) != 0)) {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012ed0d0();
    }
    if ((bVar3) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
LAB_0128a788:
    FUN_0125ef90();
LAB_0128a790:
    if ((*(longlong *)(unaff_RDI + 0x48) == 0) &&
       (FUN_0129a3b0(), *(longlong *)(unaff_RDI + 0x100) != 0)) {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012ed0d0();
    }
  }
LAB_0128ac93:
  cVar5 = FUN_00d59e50();
  if ((cVar5 == '\0') || (*(longlong *)(unaff_RDI + 200) == 0)) goto LAB_0128ae97;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  if (local_48 == '\0') {
    if (local_50 == 0) goto LAB_0128ae97;
    FUN_00d50b00();
  }
  else if (local_50 == 0) goto LAB_0128ae97;
  pvVar6 = _pthread_getspecific(pVar10);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = *(longlong *)(local_50 + 0x60);
  }
  else {
    lVar7 = *(longlong *)
             (*(longlong *)(local_50 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8) + 0x60)
    ;
  }
  if (lVar7 != 0) {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017dc5f0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        goto LAB_0128ae21;
      }
    }
    else if (local_50 != 0) {
LAB_0128ae21:
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e5710();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e5d20();
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_0128ae97:
  FUN_00d654d0();
  return;
}


