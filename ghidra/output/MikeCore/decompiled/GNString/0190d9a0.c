// Function: FUN_0190d9a0
// Address: 0190d9a0
// Size: 582 bytes
// Class: GNString
// String references:
//   "%lld"
//   ", %lld"


longlong * FUN_0190d9a0(void)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined *puVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  undefined *local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(longlong *)(unaff_RSI + 0x60) == 0) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_025795a8;
    (*DAT_025795c0)();
    lVar1 = *(longlong *)(unaff_RSI + 0x60);
    *(undefined8 **)(unaff_RSI + 0x60) = puVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar2 = DAT_027e0248;
    if (DAT_027e0248 != (undefined *)0x0) {
      FUN_00d50b00();
    }
    puVar5 = puVar2;
    FUN_0190ee70(puVar2,FUN_00e8b320);
    lVar1 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if (puVar2 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_48 = lVar1;
      local_38 = 0;
      local_40 = 0;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar6 = 0;
        do {
          local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
          if ((int)lVar6 == 0) {
            pvVar4 = _pthread_getspecific((pthread_key_t)puVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_60 = FUN_017cac30();
            local_68 = 1;
            puVar5 = &DAT_024da828;
            local_70 = &DAT_024da828;
            FUN_00d94d80(&DAT_024da828,&local_70);
          }
          else {
            pvVar4 = _pthread_getspecific((pthread_key_t)puVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_60 = FUN_017cac30();
            local_68 = 1;
            puVar5 = &DAT_024da828;
            local_70 = &DAT_024da828;
            FUN_00d94d80(&DAT_024da828,&local_70);
          }
          lVar6 = lVar6 + 1;
          local_40 = CONCAT44(local_40._4_4_,(int)lVar6);
        } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
      }
      FUN_018c8180();
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *(longlong *)(unaff_RSI + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


