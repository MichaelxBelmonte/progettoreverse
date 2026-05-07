// Function: FUN_0168f7f0
// Address: 0168f7f0
// Size: 557 bytes
// Class: MUAraModelManager
// String references:
//   "playbackRegion->getDocumentController() == plugInWrapper->_documentController"
//   "plugInWrapper->getPlaybackRegionsForPlayback()->containsObjectIdenticalTo(playbackRegion)"
//   "MUAraModelManager::getHostUsesAra1()"
//   "!plugInWrapper->getAudioProcessor()->isRunning()"
//   "provided object ref is invalid"
//   "call required from document main thread"


/* WARNING: Removing unreachable block (ram,0x0168f9a5) */
/* WARNING: Removing unreachable block (ram,0x0168f9ae) */

void FUN_0168f7f0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_stack_ffffffffffffffb8;
  char local_40;
  
  FUN_00da7190();
  cVar3 = FUN_016ae5f0();
  if (cVar3 == '\0') {
    FUN_016aea20();
  }
  else if ((unaff_RDI == 0) || (*(longlong *)(unaff_RDI + 0x28) == 0)) {
    FUN_016aea20();
  }
  else {
    FUN_00d50b00();
    cVar3 = FUN_0168a0d0();
    if (cVar3 == '\0') {
      FUN_016aea20();
    }
    else {
      plVar1 = *(longlong **)(unaff_RDI + 0x28);
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x390))();
      FUN_00d50b20();
      if (cVar3 == '\0') {
        if ((unaff_RSI == 0) || (cVar3 = FUN_01658870(), cVar3 == '\0')) {
          FUN_016aea20();
        }
        else {
          FUN_00d50b00();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01654a00();
          lVar2 = *(longlong *)(unaff_RDI + 0x98);
          if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
            FUN_00d50b20();
          }
          if (in_stack_ffffffffffffffb8 == lVar2) {
            lVar2 = *(longlong *)(unaff_RDI + 0xa8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            cVar3 = FUN_00d24090();
            if (cVar3 == '\0') {
              FUN_016aea20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            FUN_0168eed0();
          }
          else {
            FUN_016aea20();
          }
          FUN_00d50b20();
        }
      }
      else {
        FUN_016aea20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}


