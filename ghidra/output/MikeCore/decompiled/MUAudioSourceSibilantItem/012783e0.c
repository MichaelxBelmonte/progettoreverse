// Function: FUN_012783e0
// Address: 012783e0
// Size: 1933 bytes
// Class: MUAudioSourceSibilantItem


void FUN_012783e0(void)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  char cVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  longlong local_c8;
  char local_c0;
  undefined8 local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  double local_78;
  longlong local_70;
  double local_60;
  double local_48;
  ulonglong local_38;
  
  local_a8 = 0;
  local_a0 = 0;
  FUN_01271d60(&local_a8,1);
  if ((local_c0 == '\0') && (local_c8 != 0)) {
    FUN_00d50b00();
  }
  local_70 = local_c8;
  local_98 = *unaff_RDI;
  if (*(int *)(local_98 + 0xc) < 1) {
    local_38 = 0;
    lVar10 = 0;
  }
  else {
    lVar12 = 0;
    lVar10 = 0;
    lVar3 = 0;
    local_38 = 0;
    do {
      pVar7 = (pthread_key_t)lVar3;
      lVar3 = *(longlong *)(local_98 + 0x10);
      lVar6 = *(longlong *)(lVar3 + lVar12 * 8);
      if (lVar10 == lVar6) {
        if (((char)local_38 == '\0') && (lVar10 != 0)) {
          local_38 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          lVar3 = FUN_00d50b00();
        }
        if (((char)local_38 == '\0') || (lVar10 == 0)) {
          local_38 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
          lVar10 = lVar6;
        }
        else {
          uVar4 = FUN_00d50b20();
          local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          lVar10 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      local_78 = *(double *)(lVar3 + 0xe8) + *(double *)(lVar3 + 0xf0);
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      dVar13 = *(double *)(lVar3 + 0xe8);
      dVar14 = *(double *)(lVar3 + 0xb8);
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      dVar1 = *(double *)(lVar3 + 0xe8);
      dVar2 = *(double *)(lVar3 + 0xc0);
      plVar9 = (longlong *)*unaff_RSI;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar9 = (longlong *)*unaff_RSI;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      dVar13 = (double)(**(code **)(*plVar9 + 0x3d8))(dVar13 + dVar14,1);
      plVar9 = (longlong *)*unaff_RSI;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar9 = (longlong *)*unaff_RSI;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      local_60 = (double)(**(code **)(*plVar9 + 0x3d8))(dVar1 + dVar2,1);
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      dVar13 = dVar13 - *(double *)(lVar3 + 0xb8);
      plVar9 = (longlong *)*unaff_RSI;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar9 = (longlong *)*unaff_RSI;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      local_48 = (double)(**(code **)(*plVar9 + 0x3d8))(local_78,1);
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (local_48 - dVar13 < DAT_0241b6a8) {
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_78 = dVar13 + DAT_0241b6a8;
        pvVar5 = _pthread_getspecific(pVar7);
        lVar3 = lVar10;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
        dVar14 = local_78 - local_48;
        local_48 = local_48 + dVar14;
        local_60 = local_60 + dVar14;
        if (*(longlong *)(lVar3 + 0xa0) != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar5 = _pthread_getspecific(pVar7);
          if ((pvVar5 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
            lVar3 = *(longlong *)(lVar10 + 0xa0);
          }
          else {
            lVar3 = *(longlong *)
                     (*(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8) +
                     0xa0);
          }
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if ((pvVar5 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
        lVar3 = lVar10;
        if ((*(double *)(lVar10 + 0xe8) != dVar13) ||
           (NAN(*(double *)(lVar10 + 0xe8)) || NAN(dVar13))) goto LAB_01278914;
      }
      else {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        if ((*(double *)(lVar3 + 0xe8) != dVar13) || (NAN(*(double *)(lVar3 + 0xe8)) || NAN(dVar13))
           ) {
LAB_01278914:
          FUN_00d64850();
          *(double *)(lVar3 + 0xe8) = dVar13;
          FUN_00d64910();
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      local_48 = local_48 - dVar13;
      if ((*(double *)(lVar3 + 0xf0) != local_48) ||
         (NAN(*(double *)(lVar3 + 0xf0)) || NAN(local_48))) {
        FUN_00d64850();
        *(double *)(lVar3 + 0xf0) = local_48;
        FUN_00d64910();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      local_60 = local_60 - dVar13;
      if ((*(double *)(lVar3 + 0xc0) != local_60) ||
         (NAN(*(double *)(lVar3 + 0xc0)) || NAN(local_60))) {
        FUN_00d64850();
        *(double *)(lVar3 + 0xc0) = local_60;
        FUN_00d64910();
      }
      lVar12 = lVar12 + 1;
      local_98 = *unaff_RDI;
      lVar3 = (longlong)*(int *)(local_98 + 0xc);
    } while (lVar12 < lVar3);
  }
  local_90 = 0;
  local_88 = local_70;
  local_80 = 0;
  FUN_0127e4d0(0);
  lVar3 = *unaff_RDI;
  if (*(int *)(lVar3 + 0xc) < 1) {
    cVar11 = (char)local_38;
  }
  else {
    lVar12 = 0;
    uVar8 = local_38;
    do {
      pVar7 = (pthread_key_t)uVar8;
      local_38 = local_38 & 0xffffffff;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar12 * 8);
      cVar11 = (char)local_38;
      if (lVar10 == lVar3) {
        lVar3 = lVar10;
        if ((cVar11 == '\0') && (lVar10 != 0)) {
          local_38 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        local_38 = 1;
        if ((cVar11 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar10 = lVar3;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a5f0();
      lVar12 = lVar12 + 1;
      lVar3 = *unaff_RDI;
      uVar8 = (ulonglong)*(int *)(lVar3 + 0xc);
    } while (lVar12 < (longlong)uVar8);
    cVar11 = (char)local_38;
  }
  if (local_70 != 0) {
    cVar11 = (char)local_38;
    FUN_00d50b20();
  }
  if ((cVar11 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return;
}


