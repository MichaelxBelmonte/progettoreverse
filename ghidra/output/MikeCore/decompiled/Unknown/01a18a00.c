// Function: FUN_01a18a00
// Address: 01a18a00
// Size: 527 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a18bfe) */
/* WARNING: Removing unreachable block (ram,0x01a18c0e) */

void FUN_01a18a00(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar4;
  longlong local_90;
  char local_88;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  
  FUN_000823a0();
  lVar2 = FUN_00e86210();
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6f60;
  if (DAT_026f6f60 != 0) {
    FUN_00d50b00();
  }
  FUN_00c841b0();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    local_38 = lVar2;
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = 0;
        (**(code **)(*(longlong *)(unaff_RDI + 0x1f8) + 0x10))();
        FUN_00d50b00();
        local_40 = '\x01';
        local_58 = local_90;
        local_50 = '\0';
        param_1 = 0xa0;
        local_48 = (longlong *)(unaff_RDI + 0x1f8);
        FUN_00e8b850(0xa0,&local_58);
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          (**(code **)(*local_48 + 0x10))();
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
    lVar2 = local_38;
  }
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


