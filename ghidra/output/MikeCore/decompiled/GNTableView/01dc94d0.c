// Function: FUN_01dc94d0
// Address: 01dc94d0
// Size: 925 bytes
// Class: GNTableView


void FUN_01dc94d0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong local_d8;
  code *local_d0;
  undefined *local_c8;
  undefined8 *local_c0;
  char local_b8 [8];
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong local_40;
  char local_38;
  
  if (0 < unaff_ESI) {
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
    if (iVar1 < unaff_ESI) {
      local_d0 = DAT_02692480;
      local_c8 = &DAT_02692468;
      do {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = local_c8;
        puVar3[2] = &DAT_026927f8;
        puVar3[0xc] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
        *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        *(undefined2 *)(puVar3 + 0xb) = 0;
        (*local_d0)();
        lVar2 = DAT_027f29e0;
        if (DAT_027f29e0 != 0) {
          FUN_00d50b00();
        }
        local_90 = lVar2;
        local_88 = '\x01';
        FUN_01db9840();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        FUN_01db96b0(DAT_02394240);
        FUN_01dcc2f0();
        FUN_00d50b20();
        iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
      } while (iVar1 < unaff_ESI);
    }
    while (unaff_ESI < iVar1) {
      FUN_00d23340();
      puVar3 = local_c0;
      local_60 = local_b8[0];
      pcVar4 = local_b8;
      if (local_b8[0] == '\0') {
        pcVar4 = &local_60;
      }
      *pcVar4 = '\0';
      if ((local_b8[0] != '\0') && (local_c0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 == '\0') && (puVar3 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01dcc3e0();
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
    }
    FUN_00d403d0();
    local_80 = DAT_027f29e8;
    if (DAT_027f29e8 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00d50b00();
    lVar2 = DAT_027f29f0;
    if (DAT_027f29f0 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar2;
    FUN_00083ea0(2,&local_d8);
    FUN_000b4da0();
    local_40 = local_70;
    local_38 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_38 = '\x01';
    FUN_00d40470(&local_40,&stack0xffffffffffffffb0,1,3);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_c0 = (undefined8 *)&DAT_0253d630;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_c0 = &DAT_024c5048;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


