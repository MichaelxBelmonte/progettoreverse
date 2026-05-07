// Function: FUN_01750710
// Address: 01750710
// Size: 942 bytes
// Class: Unknown

int64_t * FUN_01750710(void* param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int64_t *this_ptr;
  int iVar5;
  int64_t lVar6;
  int64_t local_48;
  char local_40;
  
  iVar5 = 0;
  if (0 < param_2) {
    iVar5 = param_2;
  }
  if (param_1 == 4) {
    FUN_0177c2f0();
    if (local_48 == 0) goto LAB_01750815;
    bVar1 = true;
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
  }
  else if (param_1 == 3) {
    FUN_0177bd20();
    if (local_48 == 0) {
LAB_01750815:
      local_48 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    FUN_0177c8c0();
    if (local_48 == 0) goto LAB_01750815;
    bVar1 = true;
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01739620();
  if (cVar2 != '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01739960();
    if (cVar2 == '\0') {
      uVar3 = (uint)(iVar5 - param_2 != 0);
      switch((param_2 + (((iVar5 - param_2) - uVar3) / 0xc + uVar3) * 0xc) % 0xc) {
      case 0:
        lVar6 = **(int64_t **)(local_48 + 0x10);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) {
LAB_01750aa5:
          lVar6 = 0;
        }
        else {
          FUN_00d50b00();
        }
        break;
      case 1:
        lVar6 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_01750aa5;
        FUN_00d50b00();
        break;
      case 2:
        lVar6 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_01750aa5;
        FUN_00d50b00();
        break;
      case 3:
        lVar6 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 0x10);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_01750aa5;
        FUN_00d50b00();
        break;
      case 4:
        lVar6 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 0x10);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_01750aa5;
        FUN_00d50b00();
        break;
      case 5:
        lVar6 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 0x18);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_01750aa5;
        FUN_00d50b00();
        break;
      case 6:
        lVar6 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 0x18);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_01750aa5;
        FUN_00d50b00();
        break;
      case 7:
        lVar6 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 0x20);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_01750aa5;
        FUN_00d50b00();
        break;
      case 8:
        lVar6 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 0x28);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_01750aa5;
        FUN_00d50b00();
        break;
      case 9:
        lVar6 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 0x28);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_01750aa5;
        FUN_00d50b00();
        break;
      case 10:
        lVar6 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 0x30);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_01750aa5;
        FUN_00d50b00();
        break;
      default:
        lVar6 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 0x30);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_01750aa5;
        FUN_00d50b00();
      }
      *this_ptr = lVar6;
      *(void*)(this_ptr + 1) = 1;
      goto joined_r0x017508b2;
    }
  }
  FUN_00d8ede0();
joined_r0x017508b2:
  if ((bVar1) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

