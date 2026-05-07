// Function: FUN_017c5270
// Address: 017c5270
// Size: 739 bytes
// Class: GNFraction


/* WARNING: Removing unreachable block (ram,0x017c54f8) */
/* WARNING: Removing unreachable block (ram,0x017c5505) */

undefined8 * FUN_017c5270(void)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  undefined8 *puVar6;
  code *pcVar7;
  code *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  code *local_88;
  undefined *local_80;
  code *local_78;
  
  local_88 = unaff_RSI + 0x50;
  cVar4 = FUN_00e7c7f0();
  if ((cVar4 == '\0') || (lVar1 = *(longlong *)(unaff_RSI + 0x40), lVar1 == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    local_b0 = 0;
    local_b8 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = lVar1;
    if (*(int *)(lVar1 + 0xc) < 1) {
      bVar3 = false;
      puVar6 = (undefined8 *)0x0;
    }
    else {
      local_78 = DAT_02572370;
      lVar8 = 0;
      local_80 = &DAT_02572358;
      puVar6 = (undefined8 *)0x0;
      bVar3 = false;
      pcVar7 = DAT_02572370;
      do {
        local_b8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017c3170();
        local_d0 = 0;
        local_d8 = 0;
        pcVar7 = unaff_RSI;
        cVar4 = FUN_017c4d30(unaff_RSI,&local_d8);
        if (cVar4 == '\0') {
          pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017c3170();
          uVar2 = *(undefined8 *)local_88;
          FUN_00e7c2a0();
          FUN_00e7c3c0();
          local_90 = uVar2;
          FUN_00e7b820();
          local_c0 = 0;
          local_c8 = 0;
          cVar4 = FUN_017c4d30();
          if (cVar4 != '\0') goto LAB_017c549e;
        }
        else {
LAB_017c549e:
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = local_80;
            (*local_78)();
            bVar3 = true;
          }
          FUN_00d21140();
        }
        lVar8 = lVar8 + 1;
        local_a0 = CONCAT44(local_a0._4_4_,(int)lVar8);
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_0142bf90();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar3) goto LAB_017c5550;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_017c5550;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_017c5550:
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


