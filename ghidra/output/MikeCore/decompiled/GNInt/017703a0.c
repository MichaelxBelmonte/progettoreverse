// Function: FUN_017703a0
// Address: 017703a0
// Size: 500 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x01770490) */
/* WARNING: Removing unreachable block (ram,0x01770531) */
/* WARNING: Removing unreachable block (ram,0x0177053a) */
/* WARNING: Removing unreachable block (ram,0x01770559) */
/* WARNING: Removing unreachable block (ram,0x01770562) */
/* WARNING: Removing unreachable block (ram,0x0177044e) */
/* WARNING: Removing unreachable block (ram,0x0177045b) */
/* WARNING: Removing unreachable block (ram,0x0177049d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017703a0(pthread_key_t param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  pthread_key_t pVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_78;
  char local_70;
  
  FUN_01770670();
  lVar1 = *unaff_RSI;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != local_78) {
    if (*unaff_RSI == 0) {
      if (unaff_RDI[0xd] != 0) {
        FUN_0176f3a0();
      }
    }
    else if (unaff_RDI[0xd] == 0) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar7 = 0x25ff650;
      *puVar6 = &DAT_025ff650;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x51) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x59) = 0;
      (*DAT_025ff668)();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01777d20();
      FUN_0176f3a0();
      FUN_00d50b20();
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01777d20();
    }
    uVar4 = _UNK_02411fbc;
    uVar3 = _UNK_02411fb8;
    uVar2 = _UNK_02411fb4;
    *(undefined4 *)((longlong)unaff_RDI + 0x74) = _DAT_02411fb0;
    *(undefined4 *)(unaff_RDI + 0xf) = uVar2;
    *(undefined4 *)((longlong)unaff_RDI + 0x7c) = uVar3;
    *(undefined4 *)(unaff_RDI + 0x10) = uVar4;
    (**(code **)(*unaff_RDI + 0x390))();
  }
  return;
}


