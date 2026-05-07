// Function: FUN_01353f80
// Address: 01353f80
// Size: 1469 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x0135443f) */
/* WARNING: Removing unreachable block (ram,0x01354448) */

void FUN_01353f80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong unaff_RDI;
  longlong lVar10;
  undefined8 local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_48;
  char local_40;
  
  if (*(char *)(unaff_RDI + 0x1a9) == '\0') {
    if (*(char *)(unaff_RDI + 0x172) == '\0') {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar6 = &DAT_02572358;
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      lVar8 = *param_2;
      if (*(int *)(lVar8 + 0x18) < 8) {
        bVar2 = false;
        lVar10 = 0;
      }
      else {
        lVar9 = 0;
        lVar10 = 0;
        bVar2 = false;
        local_f0 = param_2;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar8 + 0x10) + 4 + lVar9 * 8);
          lVar8 = *(longlong *)(unaff_RDI + 0x40);
          local_f8 = lVar9;
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          FUN_013903d0(0,0,(longlong)iVar1,0);
          lVar9 = local_e8;
          if (local_e8 == lVar10) {
            lVar9 = lVar10;
            if ((bVar2) || (local_e8 == 0)) {
              bVar3 = bVar2;
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
            }
            else if (local_e0 == '\0') {
              FUN_00d50b00();
              bVar3 = true;
            }
            else {
              bVar3 = true;
            }
          }
          else if (local_e0 == '\0') {
            if (local_e8 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
            local_e0 = '\0';
            bVar3 = true;
          }
          bVar2 = bVar3;
          lVar10 = lVar9;
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if (0 < *(int *)(lVar10 + 0xc)) {
            lVar8 = 0;
            do {
              lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar8 * 8);
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              FUN_00d235a0();
              if (lVar9 != 0) {
                FUN_00d50b20();
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < *(int *)(lVar10 + 0xc));
          }
          lVar9 = local_f8 + 1;
          lVar8 = *local_f0;
          iVar1 = *(int *)(lVar8 + 0x18);
          iVar7 = iVar1 + 7;
          if (-1 < iVar1) {
            iVar7 = iVar1;
          }
          puVar6 = (undefined *)(longlong)(iVar7 >> 3);
        } while (lVar9 < (longlong)puVar6);
      }
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        lVar8 = 0;
        do {
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_90 = '\0';
          local_98 = 0;
          FUN_014cfcc0();
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)((longlong)puVar4 + 0xc));
      }
      if (*(char *)(unaff_RDI + 0x1a8) != '\x01') {
        FUN_00d64850();
        *(undefined1 *)(unaff_RDI + 0x1a8) = 1;
        FUN_00d64910();
      }
      if ((bVar2) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00d403d0();
      local_d8 = DAT_027bf410;
      if (DAT_027bf410 != 0) {
        FUN_00d50b00();
      }
      local_d0 = '\x01';
      FUN_00d50b00();
      local_c8 = 0;
      local_c0 = '\0';
      FUN_00d40470(&local_c8,&stack0xffffffffffffff80,3,3);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_118 = 0;
      local_110 = 0;
      local_108 = *param_2;
      local_100 = 0;
      FUN_0134a250(&local_108,&local_118,0,0);
      FUN_00d403d0();
      local_b8 = DAT_027e0908;
      if (DAT_027e0908 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      FUN_00d50b00();
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d40470(&local_a8,&stack0xffffffffffffff90,3,3);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


