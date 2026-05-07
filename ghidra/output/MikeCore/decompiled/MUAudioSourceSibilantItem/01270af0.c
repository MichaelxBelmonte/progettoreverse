// Function: FUN_01270af0
// Address: 01270af0
// Size: 1301 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x01270f2f) */
/* WARNING: Removing unreachable block (ram,0x01270f37) */
/* WARNING: Removing unreachable block (ram,0x01270f7d) */
/* WARNING: Removing unreachable block (ram,0x01270f3c) */
/* WARNING: Removing unreachable block (ram,0x01270d89) */
/* WARNING: Removing unreachable block (ram,0x01270d92) */
/* WARNING: Removing unreachable block (ram,0x01270e3e) */
/* WARNING: Removing unreachable block (ram,0x01270e43) */
/* WARNING: Removing unreachable block (ram,0x01270fa1) */
/* WARNING: Removing unreachable block (ram,0x01270fb0) */
/* WARNING: Removing unreachable block (ram,0x01270fb9) */
/* WARNING: Removing unreachable block (ram,0x01270f55) */
/* WARNING: Removing unreachable block (ram,0x01270fdd) */
/* WARNING: Removing unreachable block (ram,0x01270fea) */

undefined8 * FUN_01270af0(void)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar6;
  bool bVar7;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  bVar7 = unaff_RSI == 0;
  if (bVar7) {
    unaff_RSI = 0;
  }
  else {
    FUN_00d50b00();
  }
  bVar7 = !bVar7;
  while( true ) {
    bVar1 = bVar7;
    lVar6 = unaff_RSI;
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(longlong *)(lVar6 + 0xa8);
    }
    else {
      lVar4 = *(longlong *)
               (*(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0xa8);
    }
    if (lVar4 == 0) break;
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) break;
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      if (*(longlong *)(lVar6 + 0xa8) == 0) goto LAB_01270c49;
LAB_01270ca0:
      pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      if (local_40 != lVar6) goto LAB_01270ce9;
LAB_01270c60:
      unaff_RSI = lVar6;
      bVar7 = bVar1;
      if ((bVar1) || (local_40 == 0)) goto LAB_01270d4a;
      bVar7 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar7 = true;
LAB_01270d4a:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (*(longlong *)
           (*(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0xa8) != 0
         ) goto LAB_01270ca0;
LAB_01270c49:
      local_38 = '\0';
      local_40 = 0;
      if (lVar6 == 0) goto LAB_01270c60;
LAB_01270ce9:
      unaff_RSI = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar7 = true;
        if ((bVar1) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01270d4a;
      }
      bVar7 = true;
      if ((bVar1) && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d21140();
  local_40 = lVar6;
  while( true ) {
    lVar6 = local_40;
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(longlong *)(local_40 + 0xa0);
    }
    else {
      lVar4 = *(longlong *)
               (*(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
               0xa0);
    }
    if (lVar4 == 0) break;
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    if (local_40 == 0) break;
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      if (*(longlong *)(local_40 + 0xa0) == 0) goto LAB_01270e89;
LAB_01270ee0:
      pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
LAB_01270ea0:
      lVar4 = lVar6;
      bVar7 = bVar1;
      if ((!bVar1) && (local_40 != 0)) {
        FUN_00d50b00();
        local_40 = lVar6;
LAB_01270f75:
        lVar4 = local_40;
        bVar7 = true;
      }
    }
    else {
      if (*(longlong *)
           (*(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0xa0)
          != 0) goto LAB_01270ee0;
LAB_01270e89:
      local_40 = 0;
      if (lVar6 == 0) goto LAB_01270ea0;
      local_40 = 0;
      lVar4 = local_40;
      bVar7 = true;
      if ((bVar1) && (lVar6 != 0)) {
        FUN_00d50b20();
        goto LAB_01270f75;
      }
    }
    bVar1 = bVar7;
    FUN_00d21140();
    local_40 = lVar4;
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar1) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


