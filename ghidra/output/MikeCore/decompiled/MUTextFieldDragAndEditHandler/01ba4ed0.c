// Function: FUN_01ba4ed0
// Address: 01ba4ed0
// Size: 500 bytes
// Class: MUTextFieldDragAndEditHandler


/* WARNING: Removing unreachable block (ram,0x01ba4fc1) */
/* WARNING: Removing unreachable block (ram,0x01ba4fca) */
/* WARNING: Removing unreachable block (ram,0x01ba4f17) */
/* WARNING: Removing unreachable block (ram,0x01ba4f20) */
/* WARNING: Removing unreachable block (ram,0x01ba506f) */
/* WARNING: Removing unreachable block (ram,0x01ba507c) */

void FUN_01ba4ed0(pthread_key_t param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  longlong local_48;
  char local_40;
  
  FUN_01a58dc0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01ba4f27;
    FUN_00d50b00();
  }
  else if (local_48 == 0) {
LAB_01ba4f27:
    plVar1 = (longlong *)*param_2;
    FUN_000914a0();
    if (plVar1 == (longlong *)0x0) {
LAB_01ba4f53:
      param_2 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01ba4f53;
    }
    lVar2 = *param_2;
    if (lVar2 != 0) {
      cVar3 = (char)param_2[1];
      if (cVar3 != '\0') {
        FUN_00d50b00();
      }
      goto joined_r0x01ba4f87;
    }
  }
  cVar3 = '\x01';
  lVar2 = local_48;
joined_r0x01ba4f87:
  if (lVar2 != 0) {
    FUN_019c1990();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if (local_48 != 0) {
      if (0 < *(int *)(local_48 + 0xc)) {
        lVar6 = 0;
        do {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_01334f30();
        } while ((cVar4 == '\0') && (lVar6 = lVar6 + 1, lVar6 < *(int *)(local_48 + 0xc)));
      }
      FUN_00d50b20();
    }
  }
  FUN_01e262d0();
  if ((cVar3 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return;
}


