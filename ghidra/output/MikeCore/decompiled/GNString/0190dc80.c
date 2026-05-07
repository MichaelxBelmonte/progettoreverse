// Function: FUN_0190dc80
// Address: 0190dc80
// Size: 1194 bytes
// Class: GNString
// String references:
//   ", %@"


/* WARNING: Removing unreachable block (ram,0x0190de56) */
/* WARNING: Removing unreachable block (ram,0x0190de5f) */
/* WARNING: Removing unreachable block (ram,0x0190dd27) */
/* WARNING: Removing unreachable block (ram,0x0190dd50) */
/* WARNING: Removing unreachable block (ram,0x0190dd29) */
/* WARNING: Removing unreachable block (ram,0x0190dd52) */

longlong * FUN_0190dc80(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  pthread_key_t pVar5;
  undefined *puVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar7;
  int local_80;
  undefined8 *local_60;
  char local_58;
  undefined8 *local_50;
  char local_48;
  
  if (*(longlong *)(unaff_RSI + 0x68) == 0) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    lVar1 = *(longlong *)(unaff_RSI + 0x50);
    if (lVar1 != 0) {
      local_80 = -1;
      while (local_80 = local_80 + 1, local_80 < *(int *)(lVar1 + 0xc)) {
        pVar5 = (pthread_key_t)*(undefined8 *)(lVar1 + 0x10);
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017d1790();
        if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (local_50 != (undefined8 *)0x0) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017d1790();
          if (local_58 == '\0') {
            if (local_60 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_50 = local_60;
          local_48 = '\0';
          FUN_00d235a0();
          if (local_60 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_018c8180();
    }
    lVar1 = DAT_027feca0;
    if (DAT_027feca0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d242c0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &DAT_025795a8;
    *puVar4 = &DAT_025795a8;
    (*DAT_025795c0)();
    lVar1 = *(longlong *)(unaff_RSI + 0x68);
    *(undefined8 **)(unaff_RSI + 0x68) = puVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      if (0 < *(int *)((longlong)puVar2 + 0xc)) {
        iVar7 = 0;
        do {
          if (iVar7 == 0) {
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0190bc50();
            if (local_48 == '\0') {
              if (local_50 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00d8dbf0();
            if (local_50 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0190bc50();
            local_48 = '\x01';
            if (local_60 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d94d80();
            local_50 = &DAT_024c5048;
            if (local_60 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)((longlong)puVar2 + 0xc));
      }
      FUN_0190eff0();
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *(longlong *)(unaff_RSI + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


