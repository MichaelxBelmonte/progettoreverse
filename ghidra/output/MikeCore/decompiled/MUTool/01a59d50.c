// Function: FUN_01a59d50
// Address: 01a59d50
// Size: 781 bytes
// Class: MUTool


/* WARNING: Removing unreachable block (ram,0x01a59fb8) */
/* WARNING: Removing unreachable block (ram,0x01a59fc1) */

undefined8 * FUN_01a59d50(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  void *pvVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar3 = local_48;
  FUN_00d23340();
  pcVar7 = local_38;
  if (local_40[0] != '\0') {
    pcVar7 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if (local_48 == (longlong *)0x0) {
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    (**(code **)(*local_48 + 0x9b8))(param_1,param_2);
    if (local_48 == (longlong *)0x0) {
      *unaff_RDI = puVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (*(int *)((longlong)local_48 + 0xc) < 1) {
        bVar1 = false;
        plVar10 = (longlong *)0x0;
      }
      else {
        lVar8 = 0;
        bVar1 = false;
        plVar9 = (longlong *)0x0;
        do {
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar3);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if (local_48 == plVar9) {
            plVar10 = plVar9;
            bVar2 = bVar1;
            if ((bVar1) || (local_48 == (longlong *)0x0)) goto joined_r0x01a59f59;
            bVar2 = true;
            if (local_40[0] == '\0') {
              FUN_00d50b00();
              goto LAB_01a59f45;
            }
          }
          else {
            plVar10 = local_48;
            if (local_40[0] == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              if ((bVar1) && (plVar9 != (longlong *)0x0)) {
                FUN_00d50b20();
                plVar9 = local_48;
LAB_01a59f45:
                plVar10 = plVar9;
                bVar2 = true;
              }
joined_r0x01a59f59:
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar2 = true;
              if ((bVar1) && (plVar9 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          bVar1 = bVar2;
          if ((plVar10 != (longlong *)0x0) &&
             (cVar4 = (**(code **)(*unaff_RSI + 0x430))(), cVar4 != '\0')) {
            local_40[0] = '\0';
            FUN_00d21140();
            local_48 = plVar10;
            if ((local_40[0] != '\0') && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar10;
        } while (lVar8 < *(int *)((longlong)plVar3 + 0xc));
      }
      *unaff_RDI = puVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((bVar1) && (plVar10 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return unaff_RDI;
}


