// Function: FUN_01513590
// Address: 01513590
// Size: 2000 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x01513c7e) */
/* WARNING: Removing unreachable block (ram,0x01513c87) */
/* WARNING: Removing unreachable block (ram,0x01513c95) */
/* WARNING: Removing unreachable block (ram,0x01513ca1) */
/* WARNING: Removing unreachable block (ram,0x01513a4b) */
/* WARNING: Removing unreachable block (ram,0x01513a54) */
/* WARNING: Removing unreachable block (ram,0x01513be0) */
/* WARNING: Removing unreachable block (ram,0x01513be9) */

ulonglong FUN_01513590(ulonglong param_1,char param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  byte bVar11;
  pthread_key_t pVar12;
  ulonglong uVar13;
  undefined7 uVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar15;
  longlong local_78;
  ulonglong local_50;
  undefined4 local_48;
  ulonglong local_40;
  char local_38;
  
  lVar8 = *unaff_RSI;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar8 + 0x80) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) goto LAB_01513689;
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x80) == 0);
    uVar13 = *(ulonglong *)(lVar7 + 0x80);
  }
  else {
    uVar13 = *(ulonglong *)(lVar8 + 0x80);
  }
  if (uVar13 == 0) {
LAB_01513689:
    uVar13 = 0;
    goto LAB_01513cec;
  }
  FUN_00d50b00();
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar1 = (longlong *)(unaff_RDI + 0x80);
  lVar8 = unaff_RDI;
  if (*(longlong *)(unaff_RDI + 0x80) == 0) {
    do {
      lVar7 = *(longlong *)(lVar8 + 0x50);
      if (lVar7 == 0) {
        local_78 = 0;
        goto LAB_015136c3;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x50);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar8 = lVar7;
    } while (*(longlong *)(lVar7 + 0x80) == 0);
    local_78 = *(longlong *)(lVar7 + 0x80);
  }
  else {
    local_78 = *plVar1;
  }
  if (local_78 != 0) {
    FUN_00d50b00();
  }
LAB_015136c3:
  cVar5 = FUN_00d51e10();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = uVar13;
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150ceb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (param_2 == '\0') {
      uVar13 = CONCAT71((int7)(local_40 >> 8),1);
    }
    else {
      lVar8 = *unaff_RSI;
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        lVar8 = *unaff_RSI;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar8 + 0x78) == 0) {
        do {
          lVar7 = *(longlong *)(lVar8 + 0x50);
          if (lVar7 == 0) goto LAB_0151394e;
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(longlong *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar7;
        } while (*(longlong *)(lVar7 + 0x78) == 0);
        if (*(longlong *)(lVar7 + 0x78) == 0) goto LAB_0151394e;
LAB_015138f5:
        FUN_00d50b00();
        FUN_00d50b20();
        lVar8 = *unaff_RSI;
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          lVar8 = *unaff_RSI;
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        pVar12 = (pthread_key_t)param_1;
        if (*(longlong *)(lVar8 + 0x78) == 0) {
          lVar7 = 0;
          do {
            pVar12 = (pthread_key_t)param_1;
            lVar10 = *(longlong *)(lVar8 + 0x50);
            if (lVar10 == 0) {
              bVar2 = true;
              goto LAB_015139d1;
            }
            pvVar6 = _pthread_getspecific(pVar12);
            if (pvVar6 != (void *)0x0) {
              lVar10 = *(longlong *)(lVar8 + 0x50);
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                lVar10 = *(longlong *)
                          (lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
            }
            pVar12 = (pthread_key_t)param_1;
            lVar8 = lVar10;
          } while (*(longlong *)(lVar10 + 0x78) == 0);
          lVar7 = *(longlong *)(lVar10 + 0x78);
        }
        else {
          lVar7 = *(longlong *)(lVar8 + 0x78);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        bVar2 = false;
LAB_015139d1:
        pvVar6 = _pthread_getspecific(pVar12);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01822e80();
        local_50 = local_40;
        param_1 = local_40;
        if (local_40 == 0) {
          bVar4 = false;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
          bVar4 = true;
        }
        else {
          local_38 = '\0';
          bVar4 = true;
        }
        if (!bVar2 && lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (*(longlong *)(lVar8 + 0x78) != 0) goto LAB_015138f5;
LAB_0151394e:
        bVar4 = false;
        local_50 = 0;
      }
      plVar15 = (longlong *)(unaff_RDI + 0x78);
      lVar8 = unaff_RDI;
      if (*(longlong *)(unaff_RDI + 0x78) == 0) {
        do {
          lVar7 = *(longlong *)(lVar8 + 0x50);
          if (lVar7 == 0) goto LAB_01513b52;
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(longlong *)(lVar8 + 0x50);
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = lVar7;
        } while (*(longlong *)(lVar7 + 0x78) == 0);
        lVar8 = *(longlong *)(lVar7 + 0x78);
        if (lVar8 != 0) goto LAB_01513a8a;
LAB_01513b52:
        local_40 = 0;
        uVar9 = 0;
        bVar2 = false;
      }
      else {
        lVar8 = *plVar15;
        if (lVar8 == 0) goto LAB_01513b52;
LAB_01513a8a:
        FUN_00d50b00();
        uVar9 = FUN_00d50b20();
        pVar12 = (pthread_key_t)param_1;
        if (*plVar15 == 0) {
          lVar7 = 0;
          lVar8 = unaff_RDI;
          do {
            pVar12 = (pthread_key_t)param_1;
            lVar10 = *(longlong *)(lVar8 + 0x50);
            if (lVar10 == 0) {
              local_48 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
              goto LAB_01513b7e;
            }
            pvVar6 = _pthread_getspecific(pVar12);
            if (pvVar6 != (void *)0x0) {
              lVar10 = *(longlong *)(lVar8 + 0x50);
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                lVar10 = *(longlong *)
                          (lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
            }
            lVar8 = lVar10;
            uVar9 = 0;
            pVar12 = (pthread_key_t)param_1;
          } while (*(longlong *)(lVar8 + 0x78) == 0);
          plVar15 = (longlong *)(lVar8 + 0x78);
        }
        lVar7 = *plVar15;
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_48 = 0;
LAB_01513b7e:
        pvVar6 = _pthread_getspecific(pVar12);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01822e80();
        if (local_40 == 0) {
          uVar9 = 0;
          bVar2 = false;
        }
        else {
          uVar14 = (undefined7)((ulonglong)lVar8 >> 8);
          if (local_38 == '\0') {
            FUN_00d50b00();
            uVar9 = CONCAT71(uVar14,1);
            bVar2 = true;
          }
          else {
            uVar9 = CONCAT71(uVar14,1);
            bVar2 = true;
          }
        }
        bVar11 = (byte)local_48 | lVar7 == 0;
        param_1 = (ulonglong)CONCAT31((int3)((uint)local_48 >> 8),bVar11);
        if (bVar11 == 0) {
          FUN_00d50b20();
        }
      }
      pVar12 = (pthread_key_t)param_1;
      if (*plVar1 == 0) {
        lVar8 = 0;
        do {
          pVar12 = (pthread_key_t)param_1;
          lVar7 = *(longlong *)(unaff_RDI + 0x50);
          if (lVar7 == 0) {
            bVar3 = true;
            goto LAB_01513c20;
          }
          pvVar6 = _pthread_getspecific(pVar12);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(longlong *)(unaff_RDI + 0x50);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
            }
          }
          unaff_RDI = lVar7;
          pVar12 = (pthread_key_t)param_1;
        } while (*(longlong *)(unaff_RDI + 0x80) == 0);
        lVar8 = *(longlong *)(unaff_RDI + 0x80);
      }
      else {
        lVar8 = *plVar1;
      }
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      bVar3 = false;
LAB_01513c20:
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae90();
      if (!bVar3 && lVar8 != 0) {
        FUN_00d50b20();
      }
      uVar13 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      if ((bVar2) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar4) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar13 = 0;
  }
  FUN_00d50b20();
LAB_01513cec:
  return uVar13 & 0xffffffff;
}


