// Function: FUN_01685a90
// Address: 01685a90
// Size: 1281 bytes
// Class: Unknown
// String references:
//   "tuningsEntryCount == 1"
//   "tuningEntry != NULL"


/* WARNING: Removing unreachable block (ram,0x01685dfb) */
/* WARNING: Removing unreachable block (ram,0x01685e04) */
/* WARNING: Removing unreachable block (ram,0x01685ceb) */
/* WARNING: Removing unreachable block (ram,0x01685cf4) */
/* WARNING: Removing unreachable block (ram,0x01685f32) */
/* WARNING: Removing unreachable block (ram,0x01685f3b) */

undefined8 * FUN_01685a90(pthread_key_t param_1)

{
  pthread_key_t pVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  pthread_key_t pVar11;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da_00;
  longlong local_98;
  char local_90;
  
  lVar12 = *(longlong *)(*(longlong *)(unaff_RSI + 0x30) + 0x30);
  iVar3 = (**(code **)(lVar12 + 0x38))();
  uVar13 = extraout_XMM0_Da;
  if ((iVar3 == 1) || (uVar13 = FUN_016aea20(extraout_XMM0_Da,"tuningsEntryCount == 1"), 0 < iVar3))
  {
    puVar4 = (undefined4 *)(**(code **)(lVar12 + 0x40))(uVar13,0);
    if (puVar4 != (undefined4 *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_01a016a0();
      (**(code **)(*plVar5 + 0x18))();
      iVar3 = puVar4[1];
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = iVar3 * 7;
      iVar3 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
      uVar10 = iVar3 >> 0x1f & 0xc;
      plVar9 = (longlong *)(ulonglong)uVar10;
      FUN_01770300();
      pvVar6 = _pthread_getspecific((pthread_key_t)plVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770230((float)(int)(uVar10 + iVar3 + 0x3c) * DAT_023908e0);
      pcVar2 = DAT_025ffd78;
      lVar12 = 0;
      do {
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_025ffd60;
        puVar7[7] = 0;
        puVar7[8] = 0;
        (*pcVar2)();
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01779ed0((float)(int)lVar12 * DAT_023908e0 + (float)puVar4[lVar12 + 2]);
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01779f40();
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar9);
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar9 = plVar5;
        }
        FUN_0176fde0();
        FUN_00d50b20();
        pVar11 = (pthread_key_t)plVar9;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0xc);
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_025ffd60;
      puVar7[7] = 0;
      puVar7[8] = 0;
      (*pcVar2)();
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0((float)puVar4[2] + DAT_0239394c);
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f40();
      pvVar6 = _pthread_getspecific(pVar11);
      pVar1 = (pthread_key_t)plVar5;
      if ((pvVar6 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar11 = pVar1;
      }
      FUN_0176fde0();
      pvVar6 = _pthread_getspecific(pVar11);
      if ((pvVar6 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar11 = pVar1;
      }
      FUN_01774240(*puVar4);
      pvVar6 = _pthread_getspecific(pVar11);
      if ((pvVar6 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar11 = pVar1;
      }
      FUN_016843a0();
      if ((local_90 == '\0') && (local_98 != 0)) {
        FUN_00d50b00();
      }
      FUN_0176fd70();
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      plVar9 = (longlong *)FUN_018238e0();
      (**(code **)(*plVar9 + 0x18))();
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822eb0();
      *unaff_RDI = plVar9;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      if (plVar5 == (longlong *)0x0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    FUN_016aea20(extraout_XMM0_Da_00,"tuningEntry != NULL");
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


