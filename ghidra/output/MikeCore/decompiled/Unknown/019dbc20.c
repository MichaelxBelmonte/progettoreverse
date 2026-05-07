// Function: FUN_019dbc20
// Address: 019dbc20
// Size: 1250 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019dbdd6) */
/* WARNING: Removing unreachable block (ram,0x019dbde2) */
/* WARNING: Removing unreachable block (ram,0x019dc09f) */
/* WARNING: Removing unreachable block (ram,0x019dc0ab) */
/* WARNING: Removing unreachable block (ram,0x019dbcbc) */
/* WARNING: Removing unreachable block (ram,0x019dbcc5) */
/* WARNING: Removing unreachable block (ram,0x019dc10b) */
/* WARNING: Removing unreachable block (ram,0x019dc118) */
/* WARNING: Removing unreachable block (ram,0x019dc00b) */
/* WARNING: Removing unreachable block (ram,0x019dc018) */
/* WARNING: Removing unreachable block (ram,0x019dbfa2) */
/* WARNING: Removing unreachable block (ram,0x019dbfc0) */
/* WARNING: Removing unreachable block (ram,0x019dbfa4) */
/* WARNING: Removing unreachable block (ram,0x019dbfc2) */

void FUN_019dbc20(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  int local_50;
  
  iVar4 = FUN_01d5b230();
  if (0 < iVar4) {
    iVar6 = 0;
    do {
      plVar1 = local_68;
      FUN_01d5b240();
      if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      cVar3 = FUN_01d64c70();
      if (cVar3 == '\0') {
        FUN_01d66da0();
        lVar5 = DAT_027e1440;
        if (DAT_027e1440 != 0) {
          FUN_00d50b00();
        }
        FUN_000175c0();
        if (local_60 == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != (longlong *)0x0) {
          cVar3 = (**(code **)(*local_68 + 0x50))();
          FUN_01d66ab0();
          if (cVar3 != '\0') {
            plVar7 = local_68;
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
LAB_019dbe10:
            plVar2 = local_68;
            FUN_01d66da0();
            lVar5 = DAT_027e1448;
            if (DAT_027e1448 != 0) {
              FUN_00d50b00();
            }
            FUN_000175c0();
            if (local_68 == plVar7) {
LAB_019dbec0:
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if (local_60 == '\0') {
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar8 = plVar7 != (longlong *)0x0;
              plVar7 = local_68;
              if (bVar8) {
                FUN_00d50b20();
                goto LAB_019dbec0;
              }
            }
            else {
              if (plVar7 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              local_60 = '\0';
              plVar7 = local_68;
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if (plVar7 != (longlong *)0x0) {
              FUN_01d65ea0();
              FUN_01d5e2b0();
              if (local_60 == '\0') {
                if (local_68 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if (local_68 != (longlong *)0x0) {
                local_60 = '\0';
                local_68 = (longlong *)0x0;
                local_50 = -1;
                while( true ) {
                  lVar5 = (longlong)local_50;
                  local_50 = local_50 + 1;
                  if (*(int *)((longlong)plVar2 + 0xc) <= local_50) break;
                  local_68 = *(longlong **)(plVar2[2] + 8 + lVar5 * 8);
                  FUN_01d66ab0();
                }
                FUN_002a0a30();
                FUN_00d50b20();
              }
              goto LAB_019dbe10;
            }
          }
          FUN_00d50b20();
        }
      }
      else {
        FUN_01d64cb0();
        if (local_60 == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        (**(code **)((longlong)&dylib_command_00001220.dylib.name.offset + *unaff_RDI))();
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar4);
  }
  return;
}


