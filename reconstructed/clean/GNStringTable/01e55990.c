// Function: FUN_01e55990
// Address: 01e55990
// Size: 744 bytes
// Class: GNStringTable

void FUN_01e55990(void)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  if (*(char *)(arg1 + 0x40) == '\0') {
    if (*(int64_t *)(arg1 + 0x10) == 0) {
      *(void*)(this_ptr + 1) = 0;
    }
    else {
      FUN_01e40eb0();
      *(void*)(this_ptr + 1) = 0;
      if (local_38 != '\0') goto LAB_01e55aac;
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        *this_ptr = (int64_t)local_40;
        *(void*)(this_ptr + 1) = 1;
        return;
      }
    }
LAB_01e55a78:
    local_40 = (int64_t *)0x0;
  }
  else {
    if ((*(int64_t *)(arg1 + 0x18) == 0) || (cVar3 = FUN_01e5c800(), cVar3 != '\0')) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    cVar3 = FUN_01e5c8a0();
    if (cVar3 != '\0') {
      FUN_01f27fe0();
      FUN_01f2e7e0();
      if (local_40 == (int64_t *)0x0) {
        bVar2 = true;
        plVar4 = (int64_t *)0x0;
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar2 = false;
        }
        else {
          local_38 = '\0';
          bVar2 = false;
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (plVar4 == (int64_t *)0x0) {
LAB_01e55b55:
        FUN_01f27fe0();
        *(void*)(this_ptr + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            *this_ptr = (int64_t)local_40;
            *(void*)(this_ptr + 1) = 1;
            goto LAB_01e55c5c;
          }
          local_40 = (int64_t *)0x0;
        }
      }
      else {
        lVar1 = *(int64_t *)(arg1 + 0x18);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar4 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') goto LAB_01e55b55;
        FUN_01e5cf30();
        if (local_40 == (int64_t *)0x0) {
          if (bVar2) {
            *(void*)(this_ptr + 1) = 0;
            FUN_00d50b00();
            *this_ptr = (int64_t)plVar4;
            goto LAB_01e55ab0;
          }
          FUN_00d50b00();
          local_40 = plVar4;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      *this_ptr = (int64_t)local_40;
      *(void*)(this_ptr + 1) = 1;
LAB_01e55c5c:
      if (!bVar2 && plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
    plVar4 = *(int64_t **)(arg1 + 0x20);
    if (plVar4 == (int64_t *)0x0) {
      FUN_01f27fe0();
      *(void*)(this_ptr + 1) = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          *this_ptr = (int64_t)local_40;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_01e55a78;
      }
    }
    else {
      FUN_00d50b00();
      local_40 = plVar4;
    }
  }
LAB_01e55aac:
  *this_ptr = (int64_t)local_40;
LAB_01e55ab0:
  *(void*)(this_ptr + 1) = 1;
  return;
}

