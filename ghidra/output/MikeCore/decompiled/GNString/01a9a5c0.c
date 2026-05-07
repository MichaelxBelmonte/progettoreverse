// Function: FUN_01a9a5c0
// Address: 01a9a5c0
// Size: 1256 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01a9a753) */
/* WARNING: Removing unreachable block (ram,0x01a9a75c) */
/* WARNING: Removing unreachable block (ram,0x01a9a929) */
/* WARNING: Removing unreachable block (ram,0x01a9a95b) */
/* WARNING: Removing unreachable block (ram,0x01a9a96f) */

void FUN_01a9a5c0(void)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar11;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong local_d8;
  undefined1 local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  undefined4 local_9c;
  longlong local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_00;
  
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  FUN_01a98270();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3c] != 0) {
    FUN_00d50b00();
    FUN_01d48370();
    plVar1 = (longlong *)*unaff_RSI;
    auVar13._0_8_ = (double)FUN_01a991f0();
    auVar13._8_8_ = extraout_XMM0_Qb;
    auVar12._4_12_ = auVar13._4_12_;
    auVar12._0_4_ = (float)auVar13._0_8_;
    auVar13 = insertps(auVar12,auVar12,0x1d);
    (**(code **)(*plVar1 + 0x368))(auVar13._0_8_);
    uVar6 = 0;
    (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
    pvVar5 = _pthread_getspecific((pthread_key_t)uVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_013f2b00();
    if (local_40 == 0) {
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      lVar7 = 0;
    }
    else {
      lVar7 = local_40;
      if (local_38 == '\0') {
        uVar10 = FUN_00d50b00();
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
      }
    }
    local_c8 = (ulonglong)*(uint *)(lVar7 + 0xc);
    local_9c = (undefined4)uVar6;
    if ((int)*(uint *)(lVar7 + 0xc) < 1) {
      lVar8 = 0;
      bVar3 = false;
    }
    else {
      uVar9 = 0;
      bVar3 = false;
      lVar8 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + uVar9 * 8);
        if (lVar8 == lVar2) {
          lVar2 = lVar8;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar8 != 0)) {
            uVar10 = FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar2 != 0) {
            uVar10 = FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (lVar8 != 0)) {
            uVar10 = FUN_00d50b20();
          }
        }
        bVar3 = bVar4;
        lVar8 = lVar2;
        local_d0 = 0;
        local_d8 = lVar8;
        FUN_01a9ad00(uVar10,&local_d8);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          (**(code **)(*unaff_RDI + 0x640))();
          (**(code **)(*local_c0 + 0x390))();
          if (local_38 != '\0') {
            local_38 = '\0';
          }
          FUN_01d488d0();
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01a9ae80();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_01d488d0();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        plVar1 = (longlong *)*unaff_RSI;
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        dVar11 = (double)FUN_01a99d00();
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faf20();
        auVar14._0_8_ = (double)FUN_01a99230();
        auVar14._8_8_ = extraout_XMM0_Qb_00;
        auVar16._0_4_ = (float)dVar11;
        auVar16._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar16._8_8_ = 0;
        auVar15._4_12_ = auVar14._4_12_;
        auVar15._0_4_ = (float)auVar14._0_8_;
        insertps(auVar16,auVar15,0x10);
        uVar10 = (**(code **)(*plVar1 + 0x3c0))();
        uVar9 = uVar9 + 1;
      } while (local_c8 != uVar9);
    }
    FUN_01d48390();
    if ((bVar3) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_9c == '\0') {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


