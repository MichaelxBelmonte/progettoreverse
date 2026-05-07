// Function: FUN_01913980
// Address: 01913980
// Size: 575 bytes
// Class: GNList
// String references:
//   "%@ %@"


void FUN_01913980(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_98;
  undefined8 *local_90;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x48) != *unaff_RSI) {
    FUN_00d64850();
    lVar1 = *unaff_RSI;
    lVar2 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x48) = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if ((*(longlong *)(unaff_RDI + 0x48) != 0) && (*(longlong *)(unaff_RDI + 0x50) != 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0190bc50();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0190a100();
      local_98 = local_50;
      FUN_00083ea0(2,&local_98);
      FUN_00d8cb40();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (*(longlong *)(unaff_RDI + 0x40) != lVar1) {
        FUN_00d64850();
        lVar2 = *(longlong *)(unaff_RDI + 0x40);
        if (lVar2 != lVar1) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          *(longlong *)(unaff_RDI + 0x40) = lVar1;
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_90 = (undefined8 *)&DAT_0253d630;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_90 = &DAT_024c5048;
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


