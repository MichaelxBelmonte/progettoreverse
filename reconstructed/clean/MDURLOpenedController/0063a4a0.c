// Function: FUN_0063a4a0
// Address: 0063a4a0
// Size: 1113 bytes
// Class: MDURLOpenedController

void FUN_0063a4a0(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  bool bVar6;
  int64_t local_b0;
  char local_a8;
  int64_t *local_78;
  int64_t *local_68;
  char local_60;
  int64_t *local_40;
  char local_38;
  
  if (this_ptr[0x2c] != 0) {
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_68 + 0x450))();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_0063f230();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 != (int64_t *)0x0) {
        (**(code **)(*this_ptr + 0x5e0))();
        cVar2 = FUN_0078cda0();
        if (cVar2 == '\0') {
          FUN_0063f230();
          iVar3 = FUN_00228b30();
          bVar6 = iVar3 != 2;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar6 = false;
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar6) {
          FUN_0063f230();
          FUN_0021a630();
          (**(code **)(*local_40 + 0xe28))();
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00323290();
          if (local_68 == (int64_t *)0x0) {
            local_78 = (int64_t *)0x0;
            bVar6 = false;
          }
          else {
            local_78 = local_68;
            if (local_60 == '\0') {
              FUN_00d50b00();
            }
            bVar6 = true;
          }
          if (0 < *(int *)((int64_t)local_68 + 0xc)) {
            lVar5 = 0;
            do {
              plVar1 = *(int64_t **)(local_68[2] + lVar5 * 8);
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012eb770();
              if (local_38 == '\0') {
                if (local_40 == (int64_t *)0x0) goto LAB_0063a860;
                FUN_00d50b00();
LAB_0063a820:
                FUN_00d235a0();
                FUN_00d50b20();
              }
              else {
                if (local_40 != (int64_t *)0x0) goto LAB_0063a820;
LAB_0063a860:
                FUN_00d235a0();
                local_40 = plVar1;
              }
              local_38 = '\0';
              lVar5 = lVar5 + 1;
            } while ((int)lVar5 < *(int *)((int64_t)local_68 + 0xc));
          }
          FUN_000be170();
          FUN_00d50b20();
        }
        else {
          bVar6 = false;
          local_78 = (int64_t *)0x0;
        }
        FUN_01bd5340();
        if ((bVar6) && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*this_ptr + 0x5d8))();
      FUN_006fc300();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_01bd5340();
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

