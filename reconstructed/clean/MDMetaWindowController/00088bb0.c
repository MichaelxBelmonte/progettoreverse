// Function: FUN_00088bb0
// Address: 00088bb0
// Size: 2548 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_00088bb0(uint32_t param_1)

{
  double dVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  int64_t *plVar9;
  int64_t *local_50;
  char local_48 [15];
  char local_39;
  char local_38 [8];
  
  local_39 = '\x01';
  if ((this_ptr[0x11] == 0) && (this_ptr[0x13] == 0)) {
    return;
  }
  FUN_01e561b0();
  if (local_48[0] == '\0') {
    if (local_50 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50 == (int64_t *)0x0) {
    return;
  }
  if (this_ptr[0x1e] == 0) goto LAB_00089591;
  FUN_00d50b00();
  local_38[0] = '\0';
  plVar9 = this_ptr;
  do {
    (**(code **)(*plVar9 + 0x370))();
    if (local_50 == plVar9) {
      if (((local_38[0] == '\0') && (local_50 != (int64_t *)0x0)) && (local_48[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_00088cc7;
      }
    }
    else {
      plVar9 = local_50;
      if (local_48[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar5 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar5 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_00088cc7:
        local_38[0] = '\x01';
        pcVar5 = local_48;
      }
      *pcVar5 = '\0';
    }
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026fddb0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_026e0ab8 = FUN_00015ff0();
      g_026e0aa0 = "MDMetaWindowController";
      g_026e0aa8 = 0x198;
      g_026e0ab0 = FUN_0006dea0;
      g_026e0ac0 = 0;
      ram_00000000026e0ac8 = 0;
      g_026e0ad0 = 0;
      g_026e0b48 = 0;
      ram_00000000026e0b50 = 0;
      g_026e0b58 = 0;
      g_026e0b5a = 1;
      g_026e0ad8 = 0;
      ram_00000000026e0ae0 = 0;
      g_026e0ae8 = 0;
      ram_00000000026e0af0 = 0;
      g_026e0af8 = 0;
      ram_00000000026e0b00 = 0;
      g_026e0b08 = 0;
      ram_00000000026e0b10 = 0;
      g_026e0b18 = 0;
      ram_00000000026e0b20 = 0;
      g_026e0b28 = 0;
      ram_00000000026e0b30 = 0;
      g_026e0b38 = 0;
      ram_00000000026e0b40 = 0;
      g_026e0b63 = 0;
      g_026e0b5b = 0;
      ___cxa_guard_release();
    }
    plVar8 = &g_02802688;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar8 = (int64_t *)&stack0xffffffffffffff88;
      if (cVar3 == '\0') {
        plVar8 = &g_02802688;
      }
    }
    if (*plVar8 != 0) {
      if ((local_38[0] == '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_00088e45;
    }
  } while (plVar9 != (int64_t *)0x0);
  plVar9 = (int64_t *)0x0;
LAB_00088e45:
  FUN_00d50b20();
  if (plVar9 == (int64_t *)0x0) goto LAB_00089591;
  FUN_006577f0();
  if (local_48[0] == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00088ea6;
    }
  }
  else if (local_50 != (int64_t *)0x0) {
LAB_00088ea6:
    pvVar6 = _pthread_getspecific((void*)plVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if (local_48[0] == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00088f1c;
      }
    }
    else if (local_50 != (int64_t *)0x0) {
LAB_00088f1c:
      pVar7 = (void*)plVar8;
      if ((int64_t *)this_ptr[0x11] != (int64_t *)0x0) {
        cVar3 = (**(code **)(*(int64_t *)this_ptr[0x11] + 0xac8))();
        pVar7 = (void*)plVar8;
        if (cVar3 == '\0') {
          dVar1 = (double)FUN_01c441c0(param_1,&stack0xffffffffffffff88);
          if (local_39 == '\0') {
LAB_00088f9e:
            pVar7 = 0;
          }
          else {
            if ((char)this_ptr[0x26] != '\0') {
              local_39 = '\0';
              goto LAB_00088f9e;
            }
            pVar7 = (void*)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
          }
          FUN_01e058a0();
          (**(code **)(*(int64_t *)this_ptr[0x11] + 0x998))();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar4 = FUN_016c2e90();
          if (iVar4 == 0) {
            if ((int)this_ptr[0x23] != -1) {
              *(void*)(this_ptr + 0x23) = 0xffffffff;
              this_ptr[0x22] = 0x405e000000000000;
              plVar9 = (int64_t *)this_ptr[0x12];
              plVar8 = this_ptr;
              FUN_00d8ede0();
              pVar7 = (void*)plVar8;
              if (local_48[0] == '\0') {
                if (local_50 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48[0] = '\0';
              }
              (**(code **)(*plVar9 + 0x958))();
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              lVar2 = g_026fce10;
              plVar9 = (int64_t *)this_ptr[0x11];
              if (g_026fce10 != 0) {
                FUN_00d50b00();
              }
              (**(code **)(*plVar9 + 0x958))();
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
            }
          }
          else if (((dVar1 != (double)this_ptr[0x22]) ||
                   (NAN(dVar1) || NAN((double)this_ptr[0x22]))) || ((int)this_ptr[0x23] != 1)) {
            this_ptr[0x22] = (int64_t)dVar1;
            *(void*)(this_ptr + 0x23) = 1;
            lVar2 = g_026d8918;
            plVar9 = (int64_t *)this_ptr[0x12];
            if (g_026d8918 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar9 + 0x958))();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            plVar9 = (int64_t *)this_ptr[0x11];
            (**(code **)(*(int64_t *)this_ptr[0x21] + 0x378))((float)(double)this_ptr[0x22]);
            if (local_48[0] == '\0') {
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48[0] = '\0';
            }
            (**(code **)(*plVar9 + 0x958))();
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      if (((int64_t *)this_ptr[0x13] != (int64_t *)0x0) &&
         (cVar3 = (**(code **)(*(int64_t *)this_ptr[0x13] + 0xac8))(), cVar3 == '\0')) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_016c2e90();
        if (iVar4 == 0) {
          if (this_ptr[0x25] != 0) {
            this_ptr[0x25] = 0;
            FUN_00d50b20();
          }
          lVar2 = g_026fce10;
          plVar9 = (int64_t *)this_ptr[0x13];
          if (g_026fce10 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar9 + 0x958))();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01c456e0(param_1);
          if (local_48[0] == '\0') {
            if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
               (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48[0] = '\0';
          }
          plVar9 = (int64_t *)this_ptr[0x25];
          if (local_50 == plVar9) {
LAB_0008956b:
            if (local_50 == (int64_t *)0x0) goto LAB_00089579;
          }
          else {
            if (local_50 == (int64_t *)0x0) {
LAB_00089508:
              this_ptr[0x25] = (int64_t)local_50;
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
LAB_00089524:
              (**(code **)(*(int64_t *)this_ptr[0x13] + 0x978))();
              goto LAB_0008956b;
            }
            if (plVar9 == (int64_t *)0x0) {
              plVar9 = (int64_t *)0x0;
LAB_000894f9:
              if (plVar9 != local_50) {
                FUN_00d50b00();
                goto LAB_00089508;
              }
              goto LAB_00089524;
            }
            FUN_00d50b00();
            cVar3 = (**(code **)(*local_50 + 0x50))();
            if (plVar9 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (cVar3 == '\0') {
              plVar9 = (int64_t *)this_ptr[0x25];
              goto LAB_000894f9;
            }
          }
          FUN_00d50b20();
        }
      }
LAB_00089579:
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00089591:
  FUN_00d50b20();
  return;
}

