// Function: FUN_003a0520
// Address: 003a0520
// Size: 894 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x003a0700) */
/* WARNING: Removing unreachable block (ram,0x003a0710) */
/* WARNING: Removing unreachable block (ram,0x003a085f) */
/* WARNING: Removing unreachable block (ram,0x003a086f) */
/* WARNING: Removing unreachable block (ram,0x003a05c3) */
/* WARNING: Removing unreachable block (ram,0x003a05cc) */
/* WARNING: Removing unreachable block (ram,0x003a0770) */
/* WARNING: Removing unreachable block (ram,0x003a0779) */
/* WARNING: Removing unreachable block (ram,0x003a0636) */
/* WARNING: Removing unreachable block (ram,0x003a0660) */
/* WARNING: Removing unreachable block (ram,0x003a0638) */
/* WARNING: Removing unreachable block (ram,0x003a0662) */

void FUN_003a0520(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *unaff_RDI;
  int iVar6;
  float fVar7;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  int local_48;
  float local_34;
  
  lVar4 = local_60;
  (**(code **)(*unaff_RDI + 0x988))();
  iVar5 = *(int *)(local_60 + 0xc);
  FUN_019a47c0();
  iVar5 = iVar5 + *(int *)(local_70 + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (iVar5 == 0) {
    return;
  }
  (**(code **)(*unaff_RDI + 0x988))();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_003a0731;
    FUN_00d50b00();
LAB_003a05d1:
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    local_34 = 0.0;
    while( true ) {
      lVar1 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar4 + 0xc) <= local_48) break;
      lVar3 = *(longlong *)(lVar4 + 0x10);
      local_60 = *(longlong *)(lVar3 + 8 + lVar1 * 8);
      FUN_004f9670();
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar7 = (float)FUN_004faf50();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_34 = local_34 + fVar7;
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  else {
    if (local_60 != 0) goto LAB_003a05d1;
LAB_003a0731:
    local_34 = 0.0;
    lVar4 = param_1;
  }
  FUN_019a47c0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_003a0891;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_003a0891;
  if (0 < *(int *)(local_60 + 0xc)) {
    iVar6 = 0;
    do {
      FUN_004f9670();
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar7 = (float)FUN_004faf50();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_34 = local_34 + fVar7;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_60 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_003a0891:
  (**(code **)(&UNK_00001488 + *unaff_RDI))(local_34 / (float)iVar5);
  return;
}


