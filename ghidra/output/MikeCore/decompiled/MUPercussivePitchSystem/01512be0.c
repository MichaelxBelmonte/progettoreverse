// Function: FUN_01512be0
// Address: 01512be0
// Size: 1756 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x01513094) */
/* WARNING: Removing unreachable block (ram,0x0151309d) */
/* WARNING: Removing unreachable block (ram,0x015130ab) */
/* WARNING: Removing unreachable block (ram,0x015130b7) */
/* WARNING: Removing unreachable block (ram,0x015132bc) */
/* WARNING: Removing unreachable block (ram,0x015132c5) */
/* WARNING: Removing unreachable block (ram,0x01513187) */
/* WARNING: Removing unreachable block (ram,0x01513194) */

ulonglong FUN_01512be0(ulonglong param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  pthread_key_t pVar9;
  bool bVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar14;
  longlong local_78;
  undefined4 local_50;
  longlong local_48;
  char local_40;
  
  lVar11 = *unaff_RSI;
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    lVar11 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar11 + 0x78) == 0) {
    do {
      lVar4 = *(longlong *)(lVar11 + 0x50);
      if (lVar4 == 0) goto LAB_01512cc6;
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        lVar4 = *(longlong *)(lVar11 + 0x50);
        lVar11 = FUN_00e8b990();
        if (lVar11 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
        }
      }
      lVar11 = lVar4;
    } while (*(longlong *)(lVar4 + 0x78) == 0);
    lVar11 = *(longlong *)(lVar4 + 0x78);
  }
  else {
    lVar11 = *(longlong *)(lVar11 + 0x78);
  }
  if (lVar11 == 0) {
LAB_01512cc6:
    uVar12 = 0;
    goto LAB_015130fa;
  }
  FUN_00d50b00();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar14 = (longlong *)(unaff_RDI + 0x78);
  lVar11 = unaff_RDI;
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    do {
      lVar4 = *(longlong *)(lVar11 + 0x50);
      if (lVar4 == 0) {
        local_78 = 0;
        goto LAB_01512cfd;
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        lVar4 = *(longlong *)(lVar11 + 0x50);
        lVar11 = FUN_00e8b990();
        if (lVar11 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
        }
      }
      lVar11 = lVar4;
    } while (*(longlong *)(lVar4 + 0x78) == 0);
    local_78 = *(longlong *)(lVar4 + 0x78);
  }
  else {
    local_78 = *plVar14;
  }
  if (local_78 != 0) {
    FUN_00d50b00();
  }
LAB_01512cfd:
  cVar2 = FUN_00d51e10();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    if (param_2 == '\0') {
LAB_01512ed4:
      lVar11 = 0;
      bVar1 = false;
    }
    else {
      lVar11 = unaff_RDI;
      if (*plVar14 == 0) {
        do {
          lVar4 = *(longlong *)(lVar11 + 0x50);
          if (lVar4 == 0) {
            lVar11 = 0;
            bVar1 = false;
            goto LAB_01512edc;
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *(longlong *)(lVar11 + 0x50);
            lVar11 = FUN_00e8b990();
            if (lVar11 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
            }
          }
          lVar11 = lVar4;
        } while (*(longlong *)(lVar4 + 0x78) == 0);
        lVar11 = *(longlong *)(lVar4 + 0x78);
      }
      else {
        lVar11 = *plVar14;
      }
      if (lVar11 == 0) goto LAB_01512ed4;
      FUN_00d50b00();
      uVar5 = FUN_00d50b20();
      pVar9 = (pthread_key_t)param_1;
      plVar13 = plVar14;
      if (*plVar14 == 0) {
        lVar11 = 0;
        lVar4 = unaff_RDI;
        do {
          pVar9 = (pthread_key_t)param_1;
          lVar6 = *(longlong *)(lVar4 + 0x50);
          if (lVar6 == 0) {
            local_50 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            goto LAB_0151324b;
          }
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            lVar6 = *(longlong *)(lVar4 + 0x50);
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
          }
          uVar5 = 0;
          pVar9 = (pthread_key_t)param_1;
          lVar4 = lVar6;
        } while (*(longlong *)(lVar6 + 0x78) == 0);
        plVar13 = (longlong *)(lVar6 + 0x78);
      }
      lVar11 = *plVar13;
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      local_50 = 0;
LAB_0151324b:
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      if (local_48 == 0) {
        bVar1 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
      }
      else {
        local_40 = '\0';
        bVar1 = true;
      }
      bVar8 = (byte)local_50 | lVar11 == 0;
      param_1 = (ulonglong)CONCAT31((int3)((uint)local_50 >> 8),bVar8);
      lVar11 = local_48;
      if (bVar8 == 0) {
        FUN_00d50b20();
      }
    }
LAB_01512edc:
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_0150d0b0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = local_48;
    if (param_2 != '\0') {
      if (*plVar14 == 0) {
        lVar4 = 0;
        lVar6 = unaff_RDI;
        do {
          lVar7 = *(longlong *)(lVar6 + 0x50);
          if (lVar7 == 0) {
            bVar10 = true;
            goto LAB_01512faa;
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            lVar7 = *(longlong *)(lVar6 + 0x50);
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            }
          }
          lVar6 = lVar7;
        } while (*(longlong *)(lVar6 + 0x78) == 0);
        lVar4 = *(longlong *)(lVar6 + 0x78);
      }
      else {
        lVar4 = *plVar14;
      }
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      bVar10 = false;
LAB_01512faa:
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if (!bVar10 && lVar4 != 0) {
        FUN_00d50b20();
      }
      pVar9 = (pthread_key_t)param_1;
      if (*(longlong *)(unaff_RDI + 0x80) == 0) {
        lVar6 = 0;
        do {
          pVar9 = (pthread_key_t)param_1;
          lVar4 = *(longlong *)(unaff_RDI + 0x50);
          if (lVar4 == 0) {
            bVar10 = true;
            goto LAB_01513032;
          }
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *(longlong *)(unaff_RDI + 0x50);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          unaff_RDI = lVar4;
          pVar9 = (pthread_key_t)param_1;
        } while (*(longlong *)(unaff_RDI + 0x80) == 0);
      }
      lVar6 = *(longlong *)(unaff_RDI + 0x80);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      bVar10 = false;
LAB_01513032:
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae90();
      lVar4 = 0;
      if (!bVar10 && lVar6 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    uVar12 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    if ((bVar1) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar12 = 0;
  }
  FUN_00d50b20();
LAB_015130fa:
  return uVar12 & 0xffffffff;
}


